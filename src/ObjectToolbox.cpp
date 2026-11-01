#include <Geode/binding/ObjectToolbox.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x49d970
// Method: ObjectToolbox::~ObjectToolbox
char *__fastcall ObjectToolbox__dtor_ObjectToolbox(char *Block, char a2)
{
  *(_QWORD *)Block = &ObjectToolbox::`vftable'; /*0x49d988*/
  sub_18A270(Block + 320, Block + 320, *(_QWORD *)(*((_QWORD *)Block + 40) + 8LL)); /*0x49d9a7*/
  j_j_free(*((void **)Block + 40)); /*0x49d9b8*/
  cocos2d::CCNode::~CCNode((cocos2d::CCNode *)Block); /*0x49d9c0*/
  if ( (a2 & 1) != 0 ) /*0x49d9ca*/
    j_j_free(Block); /*0x49d9d4*/
  return Block; /*0x49d9d9*/
}

// [2/6] Address: 0x49d9f0
// Method: ObjectToolbox::sharedState
// Hidden C++ exception states: #wind=2
__int64 ObjectToolbox_sharedState()
{
  __int64 result; // rax
  _QWORD *v1; // rax
  void (__fastcall *v2)(cocos2d::CCNode *); // rdx
  cocos2d::CCNode *v3; // [rsp+30h] [rbp+8h]

  result = qword_906078; /*0x49d9fa*/
  if ( !qword_906078 ) /*0x49da04*/
  {
    v3 = (cocos2d::CCNode *)operator new(0x150u); /*0x49da17*/
    cocos2d::CCNode::CCNode(v3); /*0x49da1f*/
    *(_QWORD *)v3 = &ObjectToolbox::`vftable'; /*0x49da2d*/
    *((_QWORD *)v3 + 40) = 0; /*0x49da32*/
    *((_QWORD *)v3 + 41) = 0; /*0x49da39*/
    v1 = operator new(0x48u); /*0x49da45*/
    *v1 = v1; /*0x49da4a*/
    v1[1] = v1; /*0x49da4d*/
    v1[2] = v1; /*0x49da51*/
    *((_WORD *)v1 + 12) = 257; /*0x49da55*/
    *((_QWORD *)v3 + 40) = v1; /*0x49da5b*/
    qword_906078 = (__int64)v3; /*0x49da62*/
    v2 = *(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v3 + 72LL); /*0x49da6c*/
    if ( (char *)v2 == (char *)ObjectToolbox_init ) /*0x49da7d*/
      ObjectToolbox_init(v3); /*0x49da7f*/
    else
      v2(v3); /*0x49da96*/
    return qword_906078; /*0x49da84*/
  }
  return result; /*0x49da8b*/
}

// [4/6] Address: 0x4c58e0
// Method: ObjectToolbox::intKeyToFrame
_QWORD *__fastcall ObjectToolbox_intKeyToFrame(__int64 a1, int a2)
{
  _QWORD *result; // rax
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2; /*0x4c58e0*/
  result = (_QWORD *)sub_2D27F0(a1 + 320, &v3); /*0x4c58f4*/
  if ( result[3] > 0xFu ) /*0x4c58fe*/
    return (_QWORD *)*result; /*0x4c5900*/
  return result; /*0x4c5903*/
}

// [5/6] Address: 0x4c5910
// Method: ObjectToolbox::gridNodeSizeForKey
float __fastcall ObjectToolbox_gridNodeSizeForKey(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  bool v4; // zf
  float result; // xmm0_4
  int v6; // edx
  int v7; // edx

  if ( a2 <= 458 ) /*0x4c5916*/
  {
    if ( a2 != 458 ) /*0x4c5918*/
    {
      switch ( a2 ) /*0x4c594c*/
      {
        case 195: /*0x4c594c*/
        case 196: /*0x4c594c*/
        case 204: /*0x4c594c*/
        case 206: /*0x4c594c*/
        case 220: /*0x4c594c*/
        case 234: /*0x4c594c*/
        case 235: /*0x4c594c*/
        case 245: /*0x4c594c*/
        case 246: /*0x4c594c*/
        case 277: /*0x4c594c*/
        case 278: /*0x4c594c*/
        case 392: /*0x4c594c*/
        case 393: /*0x4c594c*/
          return 15.0;
        default:
          return 30.0;
      }
    }
    return 15.0; /*0x4c5918*/
  }
  if ( a2 <= 723 ) /*0x4c5954*/
  {
    if ( a2 != 723 ) /*0x4c5956*/
    {
      switch ( a2 ) /*0x4c598a*/
      {
        case 459: /*0x4c598a*/
        case 653: /*0x4c598a*/
        case 654: /*0x4c598a*/
        case 655: /*0x4c598a*/
        case 656: /*0x4c598a*/
        case 657: /*0x4c598a*/
        case 661: /*0x4c598a*/
        case 662: /*0x4c598a*/
        case 663: /*0x4c598a*/
        case 664: /*0x4c598a*/
          return 15.0;
        default:
          return 30.0;
      }
    }
    return 15.0; /*0x4c5956*/
  }
  if ( a2 <= 1009 ) /*0x4c5992*/
  {
    if ( a2 != 1009 ) /*0x4c5994*/
    {
      switch ( a2 ) /*0x4c59c8*/
      {
        case 724: /*0x4c59c8*/
        case 735: /*0x4c59c8*/
        case 736: /*0x4c59c8*/
        case 850: /*0x4c59c8*/
        case 853: /*0x4c59c8*/
        case 854: /*0x4c59c8*/
        case 855: /*0x4c59c8*/
        case 856: /*0x4c59c8*/
        case 857: /*0x4c59c8*/
        case 859: /*0x4c59c8*/
        case 861: /*0x4c59c8*/
        case 862: /*0x4c59c8*/
        case 863: /*0x4c59c8*/
        case 873: /*0x4c59c8*/
        case 874: /*0x4c59c8*/
        case 891: /*0x4c59c8*/
        case 893: /*0x4c59c8*/
        case 894: /*0x4c59c8*/
        case 916: /*0x4c59c8*/
          return 15.0;
        case 917: /*0x4c59c8*/
          return 7.5;
        default:
          return 30.0;
      }
    }
    return 15.0; /*0x4c5994*/
  }
  if ( a2 <= 1271 ) /*0x4c59d0*/
  {
    if ( a2 != 1271 ) /*0x4c59d2*/
    {
      switch ( a2 ) /*0x4c5a06*/
      {
        case 1010: /*0x4c5a06*/
        case 1053: /*0x4c5a06*/
        case 1054: /*0x4c5a06*/
        case 1078: /*0x4c5a06*/
        case 1079: /*0x4c5a06*/
        case 1080: /*0x4c5a06*/
        case 1081: /*0x4c5a06*/
        case 1095: /*0x4c5a06*/
        case 1096: /*0x4c5a06*/
        case 1097: /*0x4c5a06*/
        case 1098: /*0x4c5a06*/
        case 1110: /*0x4c5a06*/
        case 1111: /*0x4c5a06*/
        case 1138: /*0x4c5a06*/
        case 1139: /*0x4c5a06*/
        case 1154: /*0x4c5a06*/
        case 1155: /*0x4c5a06*/
        case 1156: /*0x4c5a06*/
        case 1157: /*0x4c5a06*/
        case 1158: /*0x4c5a06*/
        case 1208: /*0x4c5a06*/
        case 1241: /*0x4c5a06*/
        case 1242: /*0x4c5a06*/
        case 1243: /*0x4c5a06*/
        case 1244: /*0x4c5a06*/
        case 1245: /*0x4c5a06*/
        case 1246: /*0x4c5a06*/
          return 15.0;
        default:
          return 30.0;
      }
    }
    return 15.0; /*0x4c59d2*/
  }
  if ( a2 > 3553 ) /*0x4c5a0e*/
  {
    if ( a2 <= 4046 ) /*0x4c5b1c*/
    {
      if ( a2 != 4046 ) /*0x4c5b1e*/
      {
        switch ( a2 ) /*0x4c5b4a*/
        {
          case 3554: /*0x4c5b4a*/
          case 3558: /*0x4c5b4a*/
          case 3559: /*0x4c5b4a*/
          case 3560: /*0x4c5b4a*/
          case 3561: /*0x4c5b4a*/
          case 3562: /*0x4c5b4a*/
          case 3563: /*0x4c5b4a*/
          case 3564: /*0x4c5b4a*/
          case 3565: /*0x4c5b4a*/
          case 3566: /*0x4c5b4a*/
          case 3584: /*0x4c5b4a*/
          case 3585: /*0x4c5b4a*/
          case 3586: /*0x4c5b4a*/
          case 3587: /*0x4c5b4a*/
          case 3588: /*0x4c5b4a*/
          case 3589: /*0x4c5b4a*/
          case 3590: /*0x4c5b4a*/
          case 3591: /*0x4c5b4a*/
          case 3592: /*0x4c5b4a*/
          case 3593: /*0x4c5b4a*/
          case 3594: /*0x4c5b4a*/
          case 3595: /*0x4c5b4a*/
          case 3596: /*0x4c5b4a*/
          case 3597: /*0x4c5b4a*/
          case 3702: /*0x4c5b4a*/
          case 3703: /*0x4c5b4a*/
          case 3704: /*0x4c5b4a*/
          case 3705: /*0x4c5b4a*/
          case 3706: /*0x4c5b4a*/
          case 3707: /*0x4c5b4a*/
          case 3708: /*0x4c5b4a*/
          case 3709: /*0x4c5b4a*/
          case 3710: /*0x4c5b4a*/
          case 3711: /*0x4c5b4a*/
          case 3712: /*0x4c5b4a*/
          case 3713: /*0x4c5b4a*/
          case 3714: /*0x4c5b4a*/
          case 3715: /*0x4c5b4a*/
          case 3716: /*0x4c5b4a*/
          case 3717: /*0x4c5b4a*/
          case 3718: /*0x4c5b4a*/
          case 3719: /*0x4c5b4a*/
          case 3720: /*0x4c5b4a*/
          case 3721: /*0x4c5b4a*/
          case 3722: /*0x4c5b4a*/
          case 3723: /*0x4c5b4a*/
          case 3724: /*0x4c5b4a*/
          case 3725: /*0x4c5b4a*/
          case 3726: /*0x4c5b4a*/
          case 3727: /*0x4c5b4a*/
          case 3728: /*0x4c5b4a*/
          case 3729: /*0x4c5b4a*/
          case 3730: /*0x4c5b4a*/
          case 3731: /*0x4c5b4a*/
          case 3732: /*0x4c5b4a*/
          case 3733: /*0x4c5b4a*/
          case 3734: /*0x4c5b4a*/
          case 3735: /*0x4c5b4a*/
          case 3736: /*0x4c5b4a*/
          case 3737: /*0x4c5b4a*/
          case 3738: /*0x4c5b4a*/
          case 3739: /*0x4c5b4a*/
          case 3740: /*0x4c5b4a*/
          case 3741: /*0x4c5b4a*/
          case 3742: /*0x4c5b4a*/
          case 3743: /*0x4c5b4a*/
          case 3744: /*0x4c5b4a*/
          case 3745: /*0x4c5b4a*/
          case 3746: /*0x4c5b4a*/
          case 3747: /*0x4c5b4a*/
          case 3748: /*0x4c5b4a*/
          case 3749: /*0x4c5b4a*/
          case 3750: /*0x4c5b4a*/
          case 3751: /*0x4c5b4a*/
          case 3752: /*0x4c5b4a*/
          case 3753: /*0x4c5b4a*/
          case 3754: /*0x4c5b4a*/
          case 3755: /*0x4c5b4a*/
          case 3756: /*0x4c5b4a*/
          case 3757: /*0x4c5b4a*/
          case 3758: /*0x4c5b4a*/
          case 3759: /*0x4c5b4a*/
          case 3760: /*0x4c5b4a*/
          case 3761: /*0x4c5b4a*/
          case 3762: /*0x4c5b4a*/
          case 3763: /*0x4c5b4a*/
          case 3764: /*0x4c5b4a*/
          case 3765: /*0x4c5b4a*/
          case 3766: /*0x4c5b4a*/
          case 3767: /*0x4c5b4a*/
          case 3768: /*0x4c5b4a*/
          case 3769: /*0x4c5b4a*/
          case 3770: /*0x4c5b4a*/
          case 3771: /*0x4c5b4a*/
          case 3772: /*0x4c5b4a*/
          case 3773: /*0x4c5b4a*/
          case 3774: /*0x4c5b4a*/
          case 3775: /*0x4c5b4a*/
          case 3776: /*0x4c5b4a*/
          case 3777: /*0x4c5b4a*/
          case 3778: /*0x4c5b4a*/
          case 3779: /*0x4c5b4a*/
          case 3780: /*0x4c5b4a*/
          case 3781: /*0x4c5b4a*/
          case 3782: /*0x4c5b4a*/
          case 3783: /*0x4c5b4a*/
          case 3784: /*0x4c5b4a*/
          case 3785: /*0x4c5b4a*/
          case 3786: /*0x4c5b4a*/
          case 3787: /*0x4c5b4a*/
          case 3788: /*0x4c5b4a*/
          case 3797: /*0x4c5b4a*/
          case 3798: /*0x4c5b4a*/
          case 3799: /*0x4c5b4a*/
            return 15.0;
          default:
            return 30.0;
        }
      }
      return 15.0; /*0x4c5b1e*/
    }
    if ( a2 > 4342 ) /*0x4c5b52*/
    {
      v6 = a2 - 4343; /*0x4c5b8b*/
      if ( v6 ) /*0x4c5b91*/
      {
        v7 = v6 - 1; /*0x4c5b93*/
        if ( v7 ) /*0x4c5b96*/
        {
          v4 = v7 == 1; /*0x4c5b98*/
          goto LABEL_41; /*0x4c5b98*/
        }
      }
    }
    else if ( a2 != 4342 ) /*0x4c5b54*/
    {
      switch ( a2 ) /*0x4c5b80*/
      {
        case 4047: /*0x4c5b80*/
        case 4048: /*0x4c5b80*/
        case 4049: /*0x4c5b80*/
        case 4050: /*0x4c5b80*/
        case 4051: /*0x4c5b80*/
        case 4052: /*0x4c5b80*/
        case 4053: /*0x4c5b80*/
        case 4054: /*0x4c5b80*/
        case 4055: /*0x4c5b80*/
        case 4056: /*0x4c5b80*/
        case 4057: /*0x4c5b80*/
        case 4058: /*0x4c5b80*/
        case 4059: /*0x4c5b80*/
        case 4077: /*0x4c5b80*/
        case 4078: /*0x4c5b80*/
        case 4079: /*0x4c5b80*/
        case 4080: /*0x4c5b80*/
        case 4108: /*0x4c5b80*/
        case 4109: /*0x4c5b80*/
        case 4110: /*0x4c5b80*/
        case 4111: /*0x4c5b80*/
        case 4112: /*0x4c5b80*/
        case 4113: /*0x4c5b80*/
        case 4114: /*0x4c5b80*/
        case 4115: /*0x4c5b80*/
        case 4116: /*0x4c5b80*/
        case 4117: /*0x4c5b80*/
        case 4118: /*0x4c5b80*/
        case 4119: /*0x4c5b80*/
        case 4120: /*0x4c5b80*/
        case 4121: /*0x4c5b80*/
        case 4123: /*0x4c5b80*/
        case 4124: /*0x4c5b80*/
        case 4125: /*0x4c5b80*/
        case 4126: /*0x4c5b80*/
        case 4127: /*0x4c5b80*/
        case 4128: /*0x4c5b80*/
        case 4129: /*0x4c5b80*/
        case 4130: /*0x4c5b80*/
        case 4131: /*0x4c5b80*/
        case 4132: /*0x4c5b80*/
        case 4133: /*0x4c5b80*/
        case 4134: /*0x4c5b80*/
        case 4135: /*0x4c5b80*/
        case 4136: /*0x4c5b80*/
        case 4137: /*0x4c5b80*/
        case 4138: /*0x4c5b80*/
        case 4139: /*0x4c5b80*/
        case 4192: /*0x4c5b80*/
        case 4193: /*0x4c5b80*/
        case 4194: /*0x4c5b80*/
        case 4202: /*0x4c5b80*/
        case 4203: /*0x4c5b80*/
        case 4204: /*0x4c5b80*/
        case 4286: /*0x4c5b80*/
        case 4287: /*0x4c5b80*/
        case 4288: /*0x4c5b80*/
        case 4289: /*0x4c5b80*/
        case 4290: /*0x4c5b80*/
          return 15.0;
        default:
          return 30.0;
      }
    }
    return 7.5; /*0x4c5ba6*/
  }
  if ( a2 == 3553 ) /*0x4c5a14*/
    return 15.0; /*0x4c5b8a*/
  if ( a2 <= 2838 ) /*0x4c5a20*/
  {
    if ( a2 == 2838 ) /*0x4c5a26*/
      return 15.0; /*0x4c5a26*/
    if ( a2 > 2252 ) /*0x4c5a32*/
    {
      switch ( a2 ) /*0x4c5ac0*/
      {
        case 2253: /*0x4c5ac0*/
        case 2254: /*0x4c5ac0*/
        case 2255: /*0x4c5ac0*/
        case 2281: /*0x4c5ac0*/
        case 2282: /*0x4c5ac0*/
        case 2283: /*0x4c5ac0*/
        case 2284: /*0x4c5ac0*/
        case 2285: /*0x4c5ac0*/
        case 2286: /*0x4c5ac0*/
        case 2287: /*0x4c5ac0*/
        case 2288: /*0x4c5ac0*/
        case 2289: /*0x4c5ac0*/
        case 2290: /*0x4c5ac0*/
        case 2291: /*0x4c5ac0*/
        case 2292: /*0x4c5ac0*/
        case 2293: /*0x4c5ac0*/
        case 2294: /*0x4c5ac0*/
        case 2295: /*0x4c5ac0*/
        case 2296: /*0x4c5ac0*/
        case 2346: /*0x4c5ac0*/
        case 2347: /*0x4c5ac0*/
          return 15.0;
        default:
          return 30.0;
      }
    }
    if ( a2 == 2252 ) /*0x4c5a34*/
      return 15.0; /*0x4c5a34*/
    if ( a2 > 1836 ) /*0x4c5a40*/
    {
      switch ( a2 ) /*0x4c5a93*/
      {
        case 1838: /*0x4c5a93*/
        case 1892: /*0x4c5a93*/
        case 1910: /*0x4c5a93*/
        case 1911: /*0x4c5a93*/
          return 15.0;
        case 1922: /*0x4c5a93*/
        case 1923: /*0x4c5a93*/
        case 1924: /*0x4c5a93*/
        case 1925: /*0x4c5a93*/
        case 1926: /*0x4c5a93*/
        case 1927: /*0x4c5a93*/
        case 1928: /*0x4c5a93*/
        case 1964: /*0x4c5a93*/
          goto LABEL_28;
        default:
          return 30.0;
      }
    }
    if ( a2 == 1836 ) /*0x4c5a42*/
      return 15.0; /*0x4c5a42*/
    v2 = a2 - 1272; /*0x4c5a48*/
    if ( !v2 ) /*0x4c5a4e*/
      return 15.0; /*0x4c5a4e*/
    v3 = v2 - 20; /*0x4c5a54*/
    if ( !v3 ) /*0x4c5a57*/
      return 15.0; /*0x4c5a57*/
    v4 = v3 == 300; /*0x4c5a5d*/
LABEL_41:
    if ( !v4 ) /*0x4c5b9b*/
      return 30.0; /*0x4c5ba5*/
    return 7.5; /*0x4c5b9b*/
  }
  switch ( a2 ) /*0x4c5af0*/
  {
    case 2839: /*0x4c5af0*/
    case 2840: /*0x4c5af0*/
    case 2841: /*0x4c5af0*/
    case 2842: /*0x4c5af0*/
    case 2843: /*0x4c5af0*/
    case 2844: /*0x4c5af0*/
    case 2845: /*0x4c5af0*/
    case 2846: /*0x4c5af0*/
    case 2847: /*0x4c5af0*/
    case 2848: /*0x4c5af0*/
    case 2849: /*0x4c5af0*/
    case 2850: /*0x4c5af0*/
    case 2851: /*0x4c5af0*/
    case 2852: /*0x4c5af0*/
    case 2853: /*0x4c5af0*/
    case 2854: /*0x4c5af0*/
    case 2855: /*0x4c5af0*/
    case 2856: /*0x4c5af0*/
    case 2857: /*0x4c5af0*/
    case 2858: /*0x4c5af0*/
    case 2859: /*0x4c5af0*/
    case 2860: /*0x4c5af0*/
    case 2861: /*0x4c5af0*/
    case 2862: /*0x4c5af0*/
    case 2863: /*0x4c5af0*/
    case 2952: /*0x4c5af0*/
    case 2953: /*0x4c5af0*/
    case 2954: /*0x4c5af0*/
    case 2955: /*0x4c5af0*/
    case 2956: /*0x4c5af0*/
    case 2957: /*0x4c5af0*/
    case 2958: /*0x4c5af0*/
    case 2959: /*0x4c5af0*/
    case 2960: /*0x4c5af0*/
    case 3036: /*0x4c5af0*/
    case 3040: /*0x4c5af0*/
    case 3044: /*0x4c5af0*/
    case 3048: /*0x4c5af0*/
    case 3054: /*0x4c5af0*/
    case 3055: /*0x4c5af0*/
    case 3056: /*0x4c5af0*/
    case 3057: /*0x4c5af0*/
    case 3058: /*0x4c5af0*/
    case 3059: /*0x4c5af0*/
    case 3060: /*0x4c5af0*/
    case 3061: /*0x4c5af0*/
    case 3062: /*0x4c5af0*/
    case 3063: /*0x4c5af0*/
    case 3064: /*0x4c5af0*/
    case 3065: /*0x4c5af0*/
    case 3066: /*0x4c5af0*/
    case 3067: /*0x4c5af0*/
    case 3068: /*0x4c5af0*/
    case 3069: /*0x4c5af0*/
    case 3070: /*0x4c5af0*/
    case 3071: /*0x4c5af0*/
    case 3072: /*0x4c5af0*/
    case 3073: /*0x4c5af0*/
    case 3074: /*0x4c5af0*/
    case 3075: /*0x4c5af0*/
    case 3076: /*0x4c5af0*/
    case 3077: /*0x4c5af0*/
    case 3078: /*0x4c5af0*/
    case 3079: /*0x4c5af0*/
    case 3080: /*0x4c5af0*/
    case 3081: /*0x4c5af0*/
    case 3082: /*0x4c5af0*/
    case 3083: /*0x4c5af0*/
    case 3084: /*0x4c5af0*/
    case 3085: /*0x4c5af0*/
    case 3090: /*0x4c5af0*/
    case 3091: /*0x4c5af0*/
    case 3093: /*0x4c5af0*/
      return 15.0;
    case 3035: /*0x4c5af0*/
    case 3039: /*0x4c5af0*/
    case 3043: /*0x4c5af0*/
    case 3047: /*0x4c5af0*/
      result = 20.0; /*0x4c5af2*/
      break; /*0x4c5afa*/
    case 3037: /*0x4c5af0*/
    case 3041: /*0x4c5af0*/
    case 3045: /*0x4c5af0*/
    case 3049: /*0x4c5af0*/
    case 3094: /*0x4c5af0*/
LABEL_28:
      result = 10.0; /*0x4c5afb*/
      break; /*0x4c5b03*/
    case 3095: /*0x4c5af0*/
      return 7.5;
    case 3096: /*0x4c5af0*/
      result = 6.0; /*0x4c5b04*/
      break; /*0x4c5b0c*/
    case 3097: /*0x4c5af0*/
      result = 5.0; /*0x4c5b0d*/
      break; /*0x4c5b15*/
    default:
      return 30.0;
  }
  return result; /*0x4c5afa*/
}

// [6/6] Address: 0x4c6330
// Method: ObjectToolbox::perspectiveBlockFrame
char *__fastcall ObjectToolbox_perspectiveBlockFrame(int a1)
{
  char *result; // rax

  if ( a1 > 902 ) /*0x4c6336*/
  {
    if ( a1 > 1529 ) /*0x4c63e5*/
    {
      switch ( a1 ) /*0x4c645c*/
      {
        case 1530: /*0x4c645c*/
        case 1531: /*0x4c645c*/
        case 1532: /*0x4c645c*/
        case 1533: /*0x4c645c*/
        case 1534: /*0x4c645c*/
        case 1535: /*0x4c645c*/
        case 1536: /*0x4c645c*/
        case 1537: /*0x4c645c*/
        case 1538: /*0x4c645c*/
        case 1539: /*0x4c645c*/
        case 1540: /*0x4c645c*/
          return "persp_block013";
        case 1552: /*0x4c645c*/
        case 1553: /*0x4c645c*/
        case 1554: /*0x4c645c*/
        case 1555: /*0x4c645c*/
        case 1556: /*0x4c645c*/
        case 1557: /*0x4c645c*/
        case 1558: /*0x4c645c*/
        case 1559: /*0x4c645c*/
        case 1560: /*0x4c645c*/
          result = "persp_block011"; /*0x4c645e*/
          break; /*0x4c6465*/
        default:
LABEL_28:
          result = &byte_6E86E0; /*0x4c646e*/
          break; /*0x4c646e*/
      }
    }
    else if ( a1 == 1529 ) /*0x4c63e7*/
    {
      return "persp_block013"; /*0x4c6466*/
    }
    else
    {
      switch ( a1 ) /*0x4c6413*/
      {
        case 943: /*0x4c6413*/
        case 944: /*0x4c6413*/
        case 945: /*0x4c6413*/
        case 946: /*0x4c6413*/
        case 947: /*0x4c6413*/
        case 948: /*0x4c6413*/
        case 949: /*0x4c6413*/
        case 950: /*0x4c6413*/
        case 951: /*0x4c6413*/
          result = "persp_block005"; /*0x4c6415*/
          break; /*0x4c641c*/
        case 980: /*0x4c6413*/
        case 981: /*0x4c6413*/
        case 982: /*0x4c6413*/
        case 983: /*0x4c6413*/
        case 984: /*0x4c6413*/
        case 985: /*0x4c6413*/
        case 986: /*0x4c6413*/
        case 987: /*0x4c6413*/
        case 988: /*0x4c6413*/
          result = "persp_block007"; /*0x4c6425*/
          break; /*0x4c642c*/
        case 1024: /*0x4c6413*/
        case 1025: /*0x4c6413*/
        case 1026: /*0x4c6413*/
        case 1027: /*0x4c6413*/
        case 1028: /*0x4c6413*/
        case 1029: /*0x4c6413*/
        case 1030: /*0x4c6413*/
        case 1031: /*0x4c6413*/
        case 1032: /*0x4c6413*/
          result = "persp_block005b"; /*0x4c641d*/
          break; /*0x4c6424*/
        case 1063: /*0x4c6413*/
        case 1064: /*0x4c6413*/
        case 1065: /*0x4c6413*/
        case 1066: /*0x4c6413*/
        case 1067: /*0x4c6413*/
        case 1068: /*0x4c6413*/
        case 1069: /*0x4c6413*/
        case 1070: /*0x4c6413*/
        case 1071: /*0x4c6413*/
          result = "persp_block009"; /*0x4c642d*/
          break; /*0x4c6434*/
        default:
          goto LABEL_28;
      }
    }
  }
  else if ( a1 == 902 ) /*0x4c633c*/
  {
    return "persp_lblock01"; /*0x4c63d7*/
  }
  else
  {
    switch ( a1 ) /*0x4c636d*/
    {
      case 515: /*0x4c636d*/
      case 516: /*0x4c636d*/
      case 517: /*0x4c636d*/
      case 518: /*0x4c636d*/
      case 519: /*0x4c636d*/
      case 520: /*0x4c636d*/
      case 521: /*0x4c636d*/
      case 522: /*0x4c636d*/
      case 523: /*0x4c636d*/
        result = "persp_blockb"; /*0x4c636f*/
        break; /*0x4c6376*/
      case 524: /*0x4c636d*/
      case 525: /*0x4c636d*/
      case 526: /*0x4c636d*/
      case 527: /*0x4c636d*/
      case 528: /*0x4c636d*/
      case 529: /*0x4c636d*/
      case 530: /*0x4c636d*/
      case 531: /*0x4c636d*/
      case 532: /*0x4c636d*/
        result = "persp_blockc"; /*0x4c6377*/
        break; /*0x4c637e*/
      case 533: /*0x4c636d*/
      case 534: /*0x4c636d*/
      case 535: /*0x4c636d*/
      case 536: /*0x4c636d*/
      case 537: /*0x4c636d*/
      case 538: /*0x4c636d*/
      case 539: /*0x4c636d*/
      case 540: /*0x4c636d*/
      case 541: /*0x4c636d*/
        result = "persp_blockd"; /*0x4c637f*/
        break; /*0x4c6386*/
      case 542: /*0x4c636d*/
      case 543: /*0x4c636d*/
      case 544: /*0x4c636d*/
      case 545: /*0x4c636d*/
      case 546: /*0x4c636d*/
      case 547: /*0x4c636d*/
      case 548: /*0x4c636d*/
      case 549: /*0x4c636d*/
      case 550: /*0x4c636d*/
        result = "persp_blocke"; /*0x4c6387*/
        break; /*0x4c638e*/
      case 551: /*0x4c636d*/
      case 552: /*0x4c636d*/
      case 553: /*0x4c636d*/
      case 554: /*0x4c636d*/
      case 555: /*0x4c636d*/
      case 556: /*0x4c636d*/
      case 557: /*0x4c636d*/
      case 558: /*0x4c636d*/
      case 559: /*0x4c636d*/
        result = "persp_blockf"; /*0x4c638f*/
        break; /*0x4c6396*/
      case 560: /*0x4c636d*/
      case 561: /*0x4c636d*/
      case 562: /*0x4c636d*/
      case 563: /*0x4c636d*/
      case 564: /*0x4c636d*/
      case 565: /*0x4c636d*/
      case 566: /*0x4c636d*/
      case 567: /*0x4c636d*/
      case 568: /*0x4c636d*/
        result = "persp_blockg"; /*0x4c6397*/
        break; /*0x4c639e*/
      case 569: /*0x4c636d*/
      case 570: /*0x4c636d*/
      case 571: /*0x4c636d*/
      case 572: /*0x4c636d*/
      case 573: /*0x4c636d*/
      case 574: /*0x4c636d*/
      case 575: /*0x4c636d*/
      case 576: /*0x4c636d*/
      case 577: /*0x4c636d*/
        result = "persp_blockh"; /*0x4c639f*/
        break; /*0x4c63a6*/
      case 578: /*0x4c636d*/
      case 579: /*0x4c636d*/
      case 580: /*0x4c636d*/
      case 581: /*0x4c636d*/
      case 582: /*0x4c636d*/
      case 583: /*0x4c636d*/
      case 584: /*0x4c636d*/
      case 585: /*0x4c636d*/
      case 586: /*0x4c636d*/
        return "persp_lblock01";
      case 587: /*0x4c636d*/
      case 588: /*0x4c636d*/
      case 589: /*0x4c636d*/
      case 590: /*0x4c636d*/
      case 591: /*0x4c636d*/
      case 592: /*0x4c636d*/
      case 593: /*0x4c636d*/
      case 594: /*0x4c636d*/
      case 595: /*0x4c636d*/
        result = "persp_lblock02"; /*0x4c63a7*/
        break; /*0x4c63ae*/
      case 596: /*0x4c636d*/
      case 597: /*0x4c636d*/
      case 598: /*0x4c636d*/
      case 599: /*0x4c636d*/
      case 600: /*0x4c636d*/
      case 601: /*0x4c636d*/
      case 602: /*0x4c636d*/
      case 603: /*0x4c636d*/
      case 604: /*0x4c636d*/
        result = "persp_lblock03"; /*0x4c63af*/
        break; /*0x4c63b6*/
      case 605: /*0x4c636d*/
      case 606: /*0x4c636d*/
      case 607: /*0x4c636d*/
      case 608: /*0x4c636d*/
      case 609: /*0x4c636d*/
      case 610: /*0x4c636d*/
      case 611: /*0x4c636d*/
      case 612: /*0x4c636d*/
      case 613: /*0x4c636d*/
        result = "persp_lblock04"; /*0x4c63b7*/
        break; /*0x4c63be*/
      case 614: /*0x4c636d*/
      case 615: /*0x4c636d*/
      case 616: /*0x4c636d*/
      case 617: /*0x4c636d*/
      case 618: /*0x4c636d*/
      case 619: /*0x4c636d*/
      case 620: /*0x4c636d*/
      case 621: /*0x4c636d*/
      case 622: /*0x4c636d*/
        result = "persp_lblock05"; /*0x4c63bf*/
        break; /*0x4c63c6*/
      case 623: /*0x4c636d*/
      case 624: /*0x4c636d*/
      case 625: /*0x4c636d*/
      case 626: /*0x4c636d*/
      case 627: /*0x4c636d*/
      case 628: /*0x4c636d*/
      case 629: /*0x4c636d*/
      case 630: /*0x4c636d*/
      case 631: /*0x4c636d*/
        result = "persp_block001"; /*0x4c63c7*/
        break; /*0x4c63ce*/
      case 632: /*0x4c636d*/
      case 633: /*0x4c636d*/
      case 634: /*0x4c636d*/
      case 635: /*0x4c636d*/
      case 636: /*0x4c636d*/
      case 637: /*0x4c636d*/
      case 638: /*0x4c636d*/
      case 639: /*0x4c636d*/
      case 640: /*0x4c636d*/
        result = "persp_block002"; /*0x4c63cf*/
        break; /*0x4c63d6*/
      default:
        goto LABEL_28;
    }
  }
  return result; /*0x4c6376*/
}
