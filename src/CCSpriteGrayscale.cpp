#include <Geode/binding/CCSpriteGrayscale.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x4bf10
// Method: CCSpriteGrayscale::shaderBody
const char *CCSpriteGrayscale_shaderBody()
{
  return "\n" /*0x4bf17*/
         "    #ifdef GL_ES\n"
         "    precision mediump float;\n"
         "    #endif\n"
         "\n"
         "    varying vec4 v_fragmentColor;\n"
         "    varying vec2 v_texCoord;\n"
         "    uniform sampler2D u_texture;\n"
         "\n"
         "    uniform vec3 u_lum;\n"
         "\n"
         "    void main(void) {\n"
         "        vec4 color = texture2D(u_texture, v_texCoord);\n"
         "        float gray = dot(color.rgb * v_fragmentColor.rgb, u_lum);\n"
         "        float normalization = (v_fragmentColor.r + v_fragmentColor.g + v_fragmentColor.b) / 3.0;\n"
         "        gray /= normalization;  // Adjust for tint brightness\n"
         "        gl_FragColor = vec4(v_fragmentColor.rgb*vec3(gray), color.a * v_fragmentColor.a);\n"
         "    }\n"
         "    ";
}

// [2/2] Address: 0x4c0f0
// Method: CCSpriteGrayscale::getShaderName
__int64 __fastcall CCSpriteGrayscale_getShaderName(__int64 a1, __int64 a2)
{
  char *v3; // rax

  *(_OWORD *)a2 = 0; /*0x4c0fb*/
  *(_QWORD *)(a2 + 16) = 0; /*0x4c103*/
  *(_QWORD *)(a2 + 24) = 0; /*0x4c107*/
  v3 = (char *)sub_3C460(32); /*0x4c10e*/
  *(_QWORD *)a2 = v3; /*0x4c113*/
  *(_QWORD *)(a2 + 16) = 17; /*0x4c116*/
  *(_QWORD *)(a2 + 24) = 31; /*0x4c11e*/
  strcpy(v3, "grayscale_program"); /*0x4c12d*/
  return a2; /*0x4c141*/
}
