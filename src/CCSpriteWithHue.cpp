#include <Geode/binding/CCSpriteWithHue.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0x4b520
// Method: CCSpriteWithHue::getShaderName
__int64 __fastcall CCSpriteWithHue_getShaderName(__int64 a1, __int64 a2)
{
  *(_OWORD *)a2 = 0; /*0x4b527*/
  *(_QWORD *)(a2 + 16) = 11; /*0x4b52a*/
  *(_QWORD *)(a2 + 24) = 15; /*0x4b532*/
  strcpy((char *)a2, "hue_program"); /*0x4b542*/
  return a2; /*0x4b562*/
}

// [2/8] Address: 0x4b570
// Method: CCSpriteWithHue::~CCSpriteWithHue
cocos2d::CCSprite *__fastcall CCSpriteWithHue__dtor_CCSpriteWithHue(cocos2d::CCSprite *Block, char a2)
{
  cocos2d::CCSprite::~CCSprite(Block); /*0x4b57f*/
  if ( (a2 & 1) != 0 ) /*0x4b588*/
    j_j_free(Block); /*0x4b592*/
  return Block; /*0x4b597*/
}

// [3/8] Address: 0x4b6b0
// Method: CCSpriteWithHue::initWithTexture_1
bool __fastcall CCSpriteWithHue_initWithTexture_1(
        cocos2d::CCSprite *a1,
        struct cocos2d::CCTexture2D *a2,
        const struct cocos2d::CCRect *a3,
        bool a4)
{
  bool result; // al
  bool v6; // di

  result = cocos2d::CCSprite::initWithTexture(a1, a2, a3, a4); /*0x4b6bd*/
  v6 = result; /*0x4b6c3*/
  if ( result ) /*0x4b6c8*/
  {
    *((_DWORD *)a1 + 150) = 0; /*0x4b6cd*/
    *((_DWORD *)a1 + 151) = 1045891645; /*0x4b6d7*/
    *((_DWORD *)a1 + 152) = 1060655596; /*0x4b6e1*/
    *((_DWORD *)a1 + 153) = 1032805417; /*0x4b6eb*/
    sub_4B7F0(a1); /*0x4b6f5*/
    return v6; /*0x4b6fa*/
  }
  return result; /*0x4b6fe*/
}

// [4/8] Address: 0x4b710
// Method: CCSpriteWithHue::initWithTexture
__int64 __fastcall CCSpriteWithHue_initWithTexture(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v7[16]; // [rsp+28h] [rbp-10h] BYREF
  char v8; // [rsp+40h] [rbp+8h] BYREF

  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v6, (const struct cocos2d::CCRect *)&unk_903B28); /*0x4b72c*/
  v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 136LL))(a2, &v8); /*0x4b73d*/
  cocos2d::CCSize::operator=(v7, v4); /*0x4b74b*/
  return (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 896LL))(a1, a2, v6); /*0x4b765*/
}

// [5/8] Address: 0x4b770
// Method: CCSpriteWithHue::initWithTexture_0
__int64 __fastcall CCSpriteWithHue_initWithTexture_0(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 888LL))(a1, a2, a3, 0);
}

// [6/8] Address: 0x4b780
// Method: CCSpriteWithHue::initWithSpriteFrame
__int64 __fastcall CCSpriteWithHue_initWithSpriteFrame(__int64 *a1, cocos2d::CCSpriteFrame *a2)
{
  __int64 v2; // rdi
  struct cocos2d::CCTexture2D *Texture; // rax
  unsigned __int8 v6; // bl

  v2 = *a1; /*0x4b795*/
  Texture = cocos2d::CCSpriteFrame::getTexture(a2); /*0x4b7a1*/
  v6 = (*(__int64 (__fastcall **)(__int64 *, struct cocos2d::CCTexture2D *, __int64))(v2 + 896))( /*0x4b7c0*/
         a1,
         Texture,
         (__int64)a2 + 92);
  (*(void (__fastcall **)(__int64 *, cocos2d::CCSpriteFrame *))(*a1 + 1008))(a1, a2); /*0x4b7c3*/
  return v6; /*0x4b7d2*/
}

// [7/8] Address: 0x4ba30
// Method: CCSpriteWithHue::shaderBody
const char *CCSpriteWithHue_shaderBody()
{
  return "                                                               \n" /*0x4ba37*/
         "    #ifdef GL_ES                                                    \n"
         "    precision mediump float;                                    \n"
         "    #endif                                                          \n"
         "    \n"
         "    varying vec4 v_fragmentColor;                \n"
         "    varying vec2 v_texCoord;                                    \n"
         "    uniform sampler2D u_texture;                                \n"
         "    uniform mat3 u_hue;                                         \n"
         "    uniform float u_alpha;                                      \n"
         "    \n"
         "    void main()                                                 \n"
         "    {                                                           \n"
         "    vec4 pixColor = texture2D(u_texture, v_texCoord);       \n"
         "    vec3 rgbColor = u_hue * pixColor.rgb * v_fragmentColor.rgb;                   \n"
         "    gl_FragColor = vec4(rgbColor, pixColor.a * u_alpha);    \n"
         "    }                                                           \n"
         "    ";
}

// [8/8] Address: 0x4ba40
// Method: CCSpriteWithHue::updateColor
__int64 __fastcall CCSpriteWithHue_updateColor(cocos2d::CCSprite *a1)
{
  cocos2d::CCSprite::updateColor(a1); /*0x4ba49*/
  return sub_4BA60(a1); /*0x4ba52*/
}
