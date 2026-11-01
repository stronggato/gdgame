#include <Geode/binding/SecretLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/6] Address: 0x5706c0
// Method: SecretLayer::textInputOpened
void __fastcall SecretLayer_textInputOpened(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  void **v5; // rcx
  char *v6; // rbx
  unsigned __int64 v7; // rdi
  size_t v8; // r8
  char *v9; // rax
  __int128 Buf2; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+40h] [rbp-58h]
  __int64 v12; // [rsp+48h] [rbp-50h]
  void *Buf1[2]; // [rsp+58h] [rbp-40h] BYREF
  size_t v14; // [rsp+68h] [rbp-30h]
  unsigned __int64 v15; // [rsp+70h] [rbp-28h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x5706f6*/
  *(_OWORD *)Buf1 = 0; /*0x5706fc*/
  v14 = 0; /*0x570701*/
  v15 = 0; /*0x570706*/
  v4 = -1; /*0x57070b*/
  do /*0x570715*/
    ++v4; /*0x570712*/
  while ( *(_BYTE *)(v3 + v4) ); /*0x570715*/
  sub_3C230(Buf1); /*0x570723*/
  Buf2 = 0; /*0x57072c*/
  v11 = 0; /*0x570731*/
  v12 = 15; /*0x570736*/
  LOBYTE(Buf2) = 0; /*0x57073f*/
  v5 = Buf1; /*0x570744*/
  v6 = (char *)Buf1[0]; /*0x570749*/
  v7 = v15; /*0x57074e*/
  if ( v15 > 0xF ) /*0x570757*/
    v5 = (void **)Buf1[0]; /*0x570757*/
  v8 = v14; /*0x57075b*/
  if ( v14 ) /*0x570763*/
    v8 = 0; /*0x570763*/
  if ( !memcmp(v5, &Buf2, v8) && !v14 ) /*0x57077b*/
  {
    Buf2 = 0; /*0x570780*/
    v11 = 1; /*0x570785*/
    v12 = 15; /*0x57078e*/
    LOWORD(Buf2) = 32; /*0x570797*/
    SpriteAnimationManager_executeAnimation(*(_QWORD *)(a1 + 40), (void **)&Buf2); /*0x5707a7*/
  }
  if ( v7 > 0xF ) /*0x5707b1*/
  {
    v9 = v6; /*0x5707b7*/
    if ( v7 + 1 >= 0x1000 ) /*0x5707c1*/
    {
      v6 = (char *)*((_QWORD *)v6 - 1); /*0x5707c7*/
      if ( (unsigned __int64)(v9 - v6 - 8) > 0x1F ) /*0x5707d6*/
        invoke_watson(0, 0, 0, 0, 0); /*0x5707e7*/
    }
    j_j_free(v6); /*0x5707f1*/
  }
}

// [3/6] Address: 0x570820
// Method: SecretLayer::textChanged
void __fastcall SecretLayer_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  void **v5; // rdx
  void *v6; // rcx
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v8; // [rsp+48h] [rbp-20h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x570849*/
  *(_OWORD *)Block = 0; /*0x57084f*/
  v8 = 0; /*0x570857*/
  v4 = -1; /*0x57085d*/
  do /*0x570867*/
    ++v4; /*0x570864*/
  while ( *(_BYTE *)(v3 + v4) ); /*0x570867*/
  sub_3C230(Block); /*0x570876*/
  v5 = Block; /*0x57087c*/
  if ( *((_QWORD *)&v8 + 1) > 0xFu ) /*0x570887*/
    v5 = (void **)Block[0]; /*0x570887*/
  sub_570900(a1 - 408, v5); /*0x570894*/
  if ( *((_QWORD *)&v8 + 1) > 0xFu ) /*0x5708a3*/
  {
    v6 = Block[0]; /*0x5708a8*/
    if ( (unsigned __int64)(*((_QWORD *)&v8 + 1) + 1LL) >= 0x1000 ) /*0x5708b7*/
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x5708bd*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x5708cc*/
        invoke_watson(0, 0, 0, 0, 0); /*0x5708e1*/
    }
    j_j_free(v6); /*0x5708e8*/
  }
}

// [4/6] Address: 0x570e30
// Method: SecretLayer::getThreadMessage
// Hidden C++ exception states: #wind=2
__int64 __fastcall SecretLayer_getThreadMessage(_DWORD *a1, __int64 a2)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  size_t v8; // r8
  char *v9; // rdx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  __int64 v44; // r8
  __int64 v45; // rcx
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  void *v50; // [rsp+40h] [rbp+8h]

  a1[109] = 0; /*0x570e50*/
  *(_OWORD *)a2 = 0; /*0x570e59*/
  *(_QWORD *)(a2 + 16) = 15; /*0x570e5c*/
  *(_QWORD *)(a2 + 24) = 15; /*0x570e64*/
  strcpy((char *)a2, "zzzzzzZZZZZZZZZ"); /*0x570e74*/
  switch ( a1[107] ) /*0x570ecf*/
  {
    case 6: /*0x570ecf*/
      v34 = a1[108]; /*0x5712c5*/
      if ( !v34 ) /*0x5712cd*/
      {
        v8 = 36; /*0x571326*/
        v9 = "You're here for my gold, aren't you?"; /*0x57132c*/
        goto LABEL_173; /*0x571333*/
      }
      v35 = v34 - 1; /*0x5712cf*/
      if ( !v35 ) /*0x5712d2*/
      {
        v8 = 24; /*0x571314*/
        v9 = "I had a secret coin once"; /*0x57131a*/
        goto LABEL_173; /*0x571321*/
      }
      v36 = v35 - 1; /*0x5712d4*/
      if ( !v36 ) /*0x5712d7*/
      {
        v8 = 19; /*0x571302*/
        v9 = "It was so beautiful"; /*0x571308*/
        goto LABEL_173; /*0x57130f*/
      }
      if ( v36 == 1 ) /*0x5712dc*/
      {
        sub_3F5A0((void *)a2, "I called it 'Sparky'", 0x14u); /*0x5712f2*/
        a1[107] = 0; /*0x5712f7*/
      }
      goto LABEL_174; /*0x5712fd*/
    case 7: /*0x570ecf*/
      v31 = a1[108]; /*0x571252*/
      if ( !v31 ) /*0x57125a*/
      {
        v8 = 38; /*0x5712b3*/
        v9 = "Don't tell RubRub, but I stole an icon"; /*0x5712b9*/
        goto LABEL_173; /*0x5712c0*/
      }
      v32 = v31 - 1; /*0x57125c*/
      if ( !v32 ) /*0x57125f*/
      {
        v8 = 23; /*0x5712a1*/
        v9 = "He will never notice..."; /*0x5712a7*/
        goto LABEL_173; /*0x5712ae*/
      }
      v33 = v32 - 1; /*0x571261*/
      if ( !v33 ) /*0x571264*/
      {
        v8 = 37; /*0x57128f*/
        v9 = "I hid it with my name as the password"; /*0x571295*/
        goto LABEL_173; /*0x57129c*/
      }
      if ( v33 == 1 ) /*0x571269*/
      {
        sub_3F5A0((void *)a2, "Muahahaha!", 0xAu); /*0x57127f*/
        a1[107] = 0; /*0x571284*/
      }
      goto LABEL_174; /*0x57128a*/
    case 8: /*0x570ecf*/
      v37 = a1[108]; /*0x571338*/
      if ( !v37 ) /*0x571340*/
      {
        v8 = 29; /*0x571399*/
        v9 = "You want a hint... don't you?"; /*0x57139f*/
        goto LABEL_173; /*0x5713a6*/
      }
      v38 = v37 - 1; /*0x571342*/
      if ( !v38 ) /*0x571345*/
      {
        v8 = 34; /*0x571387*/
        v9 = "I've hidden a password in the game"; /*0x57138d*/
        goto LABEL_173; /*0x571394*/
      }
      v39 = v38 - 1; /*0x571347*/
      if ( !v39 ) /*0x57134a*/
      {
        v8 = 31; /*0x571375*/
        v9 = "I won't tell you where it is..."; /*0x57137b*/
        goto LABEL_173; /*0x571382*/
      }
      if ( v39 == 1 ) /*0x57134f*/
      {
        sub_3F5A0((void *)a2, "It's definitely not on the support page.", 0x28u); /*0x571365*/
        a1[107] = 0; /*0x57136a*/
      }
      goto LABEL_174; /*0x571370*/
    case 9: /*0x570ecf*/
      switch ( a1[108] ) /*0x5713c5*/
      {
        case 0: /*0x5713c5*/
          v8 = 25; /*0x5713c7*/
          v9 = "I like the new Robot mode"; /*0x5713cd*/
          goto LABEL_173; /*0x5713d4*/
        case 1: /*0x5713c5*/
          v8 = 24; /*0x5713d9*/
          v9 = "I even have my own Robot"; /*0x5713df*/
          goto LABEL_173; /*0x5713e6*/
        case 2: /*0x5713c5*/
          v8 = 33; /*0x5713eb*/
          v9 = "RubRub gave it to me as a present"; /*0x5713f1*/
          goto LABEL_173; /*0x5713f8*/
        case 3: /*0x5713c5*/
          v8 = 30; /*0x5713fd*/
          v9 = "No, I won't give you a hint..."; /*0x571403*/
          goto LABEL_173; /*0x57140a*/
        case 4: /*0x5713c5*/
          v8 = 12; /*0x57140f*/
          v9 = "I said no..."; /*0x571415*/
          goto LABEL_173; /*0x57141c*/
        case 5: /*0x5713c5*/
          sub_3F5A0((void *)a2, "You will have to ask RubRub...", 0x1Eu); /*0x571431*/
          a1[107] = 0; /*0x571436*/
          break; /*0x57143c*/
        default:
          goto LABEL_174;
      }
      goto LABEL_174;
    case 0xA: /*0x570ecf*/
      v40 = a1[108]; /*0x571441*/
      if ( !v40 ) /*0x571449*/
      {
        v8 = 27; /*0x5714b9*/
        v9 = "Ok, I will give you a hint."; /*0x5714bf*/
        goto LABEL_173; /*0x5714c6*/
      }
      v41 = v40 - 1; /*0x57144b*/
      if ( !v41 ) /*0x57144e*/
      {
        v8 = 21; /*0x5714a7*/
        v9 = "Without it, I'm dead."; /*0x5714ad*/
        goto LABEL_173; /*0x5714b4*/
      }
      v42 = v41 - 1; /*0x571450*/
      if ( !v42 ) /*0x571453*/
      {
        v8 = 28; /*0x571495*/
        v9 = "If I'm not, then I'm behind."; /*0x57149b*/
        goto LABEL_173; /*0x5714a2*/
      }
      v43 = v42 - 1; /*0x571455*/
      if ( !v43 ) /*0x571458*/
      {
        v8 = 10; /*0x571483*/
        v9 = "What am I?"; /*0x571489*/
        goto LABEL_173; /*0x571490*/
      }
      if ( v43 == 1 ) /*0x57145d*/
      {
        sub_3F5A0((void *)a2, "That didn't go very well...", 0x1Bu); /*0x571473*/
        a1[107] = 0; /*0x571478*/
      }
      goto LABEL_174; /*0x57147e*/
    case 0xB: /*0x570ecf*/
      switch ( a1[108] ) /*0x5714e5*/
      {
        case 0: /*0x5714e5*/
          v8 = 28; /*0x5714e7*/
          v9 = "So you met the GateKeeper..."; /*0x5714ed*/
          goto LABEL_173; /*0x5714f4*/
        case 1: /*0x5714e5*/
          v8 = 25; /*0x5714f9*/
          v9 = "I heard he made fun of me"; /*0x5714ff*/
          goto LABEL_173; /*0x571506*/
        case 2: /*0x5714e5*/
          v8 = 23; /*0x57150b*/
          v9 = "Made fun of 'Sparky'..."; /*0x571511*/
          goto LABEL_173; /*0x571518*/
        case 3: /*0x5714e5*/
          goto LABEL_170;
        case 4: /*0x5714e5*/
          v8 = 25; /*0x57151d*/
          v9 = "Like he has a better name"; /*0x571523*/
          goto LABEL_173; /*0x57152a*/
        case 5: /*0x5714e5*/
          v8 = 32; /*0x57152f*/
          v9 = "What does 'Glubfub' mean anyway?"; /*0x571535*/
          goto LABEL_173; /*0x57153c*/
        case 6: /*0x5714e5*/
          v8 = 18; /*0x571541*/
          v9 = "I mean... oh no..."; /*0x571547*/
          goto LABEL_173; /*0x57154e*/
        case 7: /*0x5714e5*/
          sub_3F5A0((void *)a2, "I DIDNT TELL YOU ANYTHING!", 0x1Au); /*0x571563*/
          a1[107] = 0; /*0x571568*/
          v45 = qword_905FD0; /*0x57156e*/
          if ( !qword_905FD0 ) /*0x571578*/
          {
            v50 = operator new(0x6E8u); /*0x571584*/
            qword_905FD0 = sub_2723A0(v50); /*0x571592*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5715a3*/
            v45 = qword_905FD0; /*0x5715a5*/
          }
          LOBYTE(v44) = 1; /*0x5715ac*/
          sub_27B1C0(v45, &word_708044, v44); /*0x5715b6*/
          break; /*0x5715bb*/
        default:
          goto LABEL_174;
      }
      goto LABEL_174;
    case 0xD: /*0x570ecf*/
      switch ( a1[108] ) /*0x5715da*/
      {
        case 0: /*0x5715da*/
          v8 = 23; /*0x5715dc*/
          v9 = "Why are you still here?"; /*0x5715e2*/
          goto LABEL_173; /*0x5715e9*/
        case 1: /*0x5715da*/
          v8 = 18; /*0x5715ee*/
          v9 = "You're so stubborn"; /*0x5715f4*/
          goto LABEL_173; /*0x5715fb*/
        case 2: /*0x5715da*/
          v8 = 20; /*0x571600*/
          v9 = "Stubborn as a Fox..."; /*0x571606*/
          goto LABEL_173; /*0x57160d*/
        case 3: /*0x5715da*/
          v8 = 22; /*0x571612*/
          v9 = "wait, that's not right"; /*0x571618*/
          goto LABEL_173; /*0x57161f*/
        case 4: /*0x5715da*/
          v8 = 22; /*0x571624*/
          v9 = "Gah, I forgot the word"; /*0x57162a*/
          goto LABEL_173; /*0x571631*/
        case 5: /*0x5715da*/
          v8 = 31; /*0x571636*/
          v9 = "Those animals that are stubborn"; /*0x57163c*/
          goto LABEL_173; /*0x571643*/
        case 6: /*0x5715da*/
          goto LABEL_45;
        default:
          goto LABEL_174;
      }
      goto LABEL_174;
    case 0xE: /*0x570ecf*/
      switch ( a1[108] ) /*0x571662*/
      {
        case 0: /*0x571662*/
          sub_3F5A0((void *)a2, "I have to admit", 0xFu); /*0x571674*/
          goto LABEL_126; /*0x571674*/
        case 1: /*0x571662*/
LABEL_126:
          v8 = 28; /*0x571679*/
          v9 = "It does get lonely sometimes"; /*0x57167f*/
          goto LABEL_173; /*0x571686*/
        case 2: /*0x571662*/
          v8 = 16; /*0x57168b*/
          v9 = "It's so quiet..."; /*0x571691*/
          goto LABEL_173; /*0x571698*/
        case 3: /*0x571662*/
          v8 = 29; /*0x57169d*/
          v9 = "Except for the annoying music"; /*0x5716a3*/
          goto LABEL_173; /*0x5716aa*/
        case 4: /*0x571662*/
          v8 = 18; /*0x5716af*/
          v9 = "Just keeps looping"; /*0x5716b5*/
          goto LABEL_173; /*0x5716bc*/
        case 5: /*0x571662*/
          v8 = 22; /*0x5716c1*/
          v9 = "Over and over and over"; /*0x5716c7*/
          goto LABEL_173; /*0x5716ce*/
        case 6: /*0x571662*/
          v8 = 13; /*0x5716d3*/
          v9 = "It never ends"; /*0x5716d9*/
          goto LABEL_173; /*0x5716e0*/
        case 7: /*0x571662*/
          v8 = 22; /*0x5716e5*/
          v9 = "It doesn't have an end"; /*0x5716eb*/
          goto LABEL_173; /*0x5716f2*/
        case 8: /*0x571662*/
          v8 = 12; /*0x5716f7*/
          v9 = "...no ending"; /*0x5716fd*/
          goto LABEL_173; /*0x571704*/
        case 9: /*0x571662*/
          sub_3F5A0((void *)a2, "That's like 5 hints", 0x13u); /*0x571719*/
          a1[107] = 0; /*0x57171e*/
          goto LABEL_174; /*0x571724*/
        default:
          goto LABEL_174;
      }
    case 0xF: /*0x570ecf*/
      switch ( a1[108] ) /*0x571743*/
      {
        case 0: /*0x571743*/
          v8 = 32; /*0x571745*/
          v9 = "There's a trail hidden somewhere"; /*0x57174b*/
          goto LABEL_173; /*0x571752*/
        case 1: /*0x571743*/
          v8 = 31; /*0x571757*/
          v9 = "But RubRub didn't tell me where"; /*0x57175d*/
          goto LABEL_173; /*0x571764*/
        case 2: /*0x571743*/
          v8 = 26; /*0x571769*/
          v9 = "...or what the password is"; /*0x57176f*/
          goto LABEL_173; /*0x571776*/
        case 3: /*0x571743*/
          v8 = 24; /*0x57177b*/
          v9 = "You will have to ask him"; /*0x571781*/
          goto LABEL_173; /*0x571788*/
        case 4: /*0x571743*/
          v8 = 14; /*0x57178d*/
          v9 = "Fly, you fool!"; /*0x571793*/
          goto LABEL_173; /*0x57179a*/
        case 5: /*0x571743*/
          v8 = 19; /*0x57179f*/
          v9 = "...or use the force"; /*0x5717a5*/
          goto LABEL_173; /*0x5717ac*/
        case 6: /*0x571743*/
          v8 = 21; /*0x5717b1*/
          v9 = "Whichever comes first"; /*0x5717b7*/
          goto LABEL_173; /*0x5717be*/
        case 7: /*0x571743*/
          v8 = 19; /*0x5717c3*/
          v9 = "Sneaky hobbitses..."; /*0x5717c9*/
          goto LABEL_173; /*0x5717d0*/
        case 8: /*0x571743*/
          sub_3F5A0((void *)a2, "Gryffindor!", 0xBu); /*0x5717e5*/
          a1[107] = 0; /*0x5717ea*/
          break; /*0x5717f0*/
        default:
          goto LABEL_174;
      }
      goto LABEL_174;
    case 0x10: /*0x570ecf*/
      switch ( a1[108] ) /*0x57180f*/
      {
        case 0: /*0x57180f*/
          v8 = 26; /*0x571811*/
          v9 = "Secrets secrets secrets..."; /*0x571817*/
          goto LABEL_173; /*0x57181e*/
        case 1: /*0x57180f*/
          v8 = 26; /*0x571823*/
          v9 = "It's hard to keep track of"; /*0x571829*/
          goto LABEL_173; /*0x571830*/
        case 2: /*0x57180f*/
          v8 = 21; /*0x571835*/
          v9 = "makes me feel Lost..."; /*0x57183b*/
          goto LABEL_173; /*0x571842*/
        case 3: /*0x57180f*/
          v8 = 32; /*0x571847*/
          v9 = "Maybe we are in a twilight zone?"; /*0x57184d*/
          goto LABEL_173; /*0x571854*/
        case 4: /*0x57180f*/
          v8 = 27; /*0x571859*/
          v9 = "Reminds me of a book I read"; /*0x57185f*/
          goto LABEL_173; /*0x571866*/
        case 5: /*0x57180f*/
          v8 = 20; /*0x57186b*/
          v9 = "The pages were weird"; /*0x571871*/
          goto LABEL_173; /*0x571878*/
        case 6: /*0x57180f*/
          v8 = 21; /*0x57187d*/
          v9 = "Page one was page two"; /*0x571883*/
          goto LABEL_173; /*0x57188a*/
        case 7: /*0x57180f*/
          v8 = 23; /*0x57188f*/
          v9 = "Page three was page six"; /*0x571895*/
          goto LABEL_173; /*0x57189c*/
        case 8: /*0x57180f*/
          sub_3F5A0((void *)a2, "Made it really hard to read", 0x1Bu); /*0x5718b1*/
          a1[107] = 0; /*0x5718b6*/
          break; /*0x5718bc*/
        default:
          goto LABEL_174;
      }
      goto LABEL_174;
    case 0x11: /*0x570ecf*/
      switch ( a1[108] ) /*0x5718db*/
      {
        case 0: /*0x5718db*/
          v8 = 31; /*0x5718dd*/
          v9 = "I don't feel good about this..."; /*0x5718e3*/
          goto LABEL_173; /*0x5718ea*/
        case 1: /*0x5718db*/
          v8 = 24; /*0x5718ef*/
          v9 = "RubRub will be back soon"; /*0x5718f5*/
          goto LABEL_173; /*0x5718fc*/
        case 2: /*0x5718db*/
          v8 = 27; /*0x571901*/
          v9 = "...unless he's already here"; /*0x571907*/
          goto LABEL_173; /*0x57190e*/
        case 3: /*0x5718db*/
          v8 = 29; /*0x571913*/
          v9 = "Watching, waiting, lurking..."; /*0x571919*/
          goto LABEL_173; /*0x571920*/
        case 4: /*0x5718db*/
          v8 = 26; /*0x571925*/
          v9 = "He knows every move I make"; /*0x57192b*/
          goto LABEL_173; /*0x571932*/
        case 5: /*0x5718db*/
          v8 = 19; /*0x571937*/
          v9 = "Every move YOU make"; /*0x57193d*/
          goto LABEL_173; /*0x571944*/
        case 6: /*0x5718db*/
          v8 = 27; /*0x571949*/
          v9 = "But maybe you can stop him?"; /*0x57194f*/
          goto LABEL_173; /*0x571956*/
        case 7: /*0x5718db*/
          sub_3F5A0((void *)a2, "Maybe you are the key?", 0x16u); /*0x57196b*/
          a1[107] = 0; /*0x571970*/
          break; /*0x571976*/
        default:
          goto LABEL_174;
      }
      goto LABEL_174;
    case 0x13: /*0x570ecf*/
      v46 = a1[108]; /*0x571978*/
      if ( !v46 ) /*0x571980*/
      {
        v8 = 26; /*0x5719cc*/
        v9 = "What is the hardest Demon?"; /*0x5719d2*/
        goto LABEL_173; /*0x5719d9*/
      }
      v47 = v46 - 1; /*0x571982*/
      if ( !v47 ) /*0x571985*/
      {
LABEL_170:
        v8 = 3; /*0x5719bd*/
        v9 = "..."; /*0x5719c3*/
        goto LABEL_173; /*0x5719ca*/
      }
      v48 = v47 - 1; /*0x571987*/
      if ( !v48 ) /*0x57198a*/
      {
        v8 = 31; /*0x5719ae*/
        v9 = "Even harder than Extreme Demons"; /*0x5719b4*/
        goto LABEL_173; /*0x5719bb*/
      }
      if ( v48 == 1 ) /*0x57198f*/
      {
        sub_3F5A0((void *)a2, "There must be more", 0x12u); /*0x5719a1*/
        a1[107] = 0; /*0x5719a6*/
      }
      goto LABEL_174; /*0x5719ac*/
    case 0x65: /*0x570ecf*/
      v4 = a1[108]; /*0x570ed1*/
      if ( !v4 ) /*0x570ed9*/
      {
        v8 = 15; /*0x570f49*/
        v9 = "So... whats up?"; /*0x570f4f*/
        goto LABEL_173; /*0x570f56*/
      }
      v5 = v4 - 1; /*0x570edb*/
      if ( !v5 ) /*0x570ede*/
      {
        v8 = 33; /*0x570f37*/
        v9 = "The back button is in the corner."; /*0x570f3d*/
        goto LABEL_173; /*0x570f44*/
      }
      v6 = v5 - 1; /*0x570ee0*/
      if ( !v6 ) /*0x570ee3*/
      {
        v8 = 19; /*0x570f25*/
        v9 = "Ready to leave yet?"; /*0x570f2b*/
        goto LABEL_173; /*0x570f32*/
      }
      v7 = v6 - 1; /*0x570ee5*/
      if ( !v7 ) /*0x570ee8*/
      {
        v8 = 24; /*0x570f13*/
        v9 = "Whenever you're ready..."; /*0x570f19*/
        goto LABEL_173; /*0x570f20*/
      }
      if ( v7 == 1 ) /*0x570eed*/
      {
        sub_3F5A0((void *)a2, "Fine, I can wait.", 0x11u); /*0x570f03*/
        a1[107] = 0; /*0x570f08*/
      }
      goto LABEL_174; /*0x570f0e*/
    case 0x66: /*0x570ecf*/
      v10 = a1[108]; /*0x570f5b*/
      if ( !v10 ) /*0x570f63*/
      {
        v8 = 29; /*0x570fd3*/
        v9 = "I have an idea for a gamemode"; /*0x570fd9*/
        goto LABEL_173; /*0x570fe0*/
      }
      v11 = v10 - 1; /*0x570f65*/
      if ( !v11 ) /*0x570f68*/
      {
        v8 = 18; /*0x570fc1*/
        v9 = "You play as a cube"; /*0x570fc7*/
        goto LABEL_173; /*0x570fce*/
      }
      v12 = v11 - 1; /*0x570f6a*/
      if ( !v12 ) /*0x570f6d*/
      {
        v8 = 13; /*0x570faf*/
        v9 = "that can jump"; /*0x570fb5*/
        goto LABEL_173; /*0x570fbc*/
      }
      v13 = v12 - 1; /*0x570f6f*/
      if ( !v13 ) /*0x570f72*/
      {
        v8 = 23; /*0x570f9d*/
        v9 = "...and there are spikes"; /*0x570fa3*/
        goto LABEL_173; /*0x570faa*/
      }
      if ( v13 == 1 ) /*0x570f77*/
      {
        sub_3F5A0((void *)a2, "nevermind...", 0xCu); /*0x570f8d*/
        a1[107] = 0; /*0x570f92*/
      }
      goto LABEL_174; /*0x570f98*/
    case 0x67: /*0x570ecf*/
      v14 = a1[108]; /*0x570fe5*/
      if ( !v14 ) /*0x570fed*/
      {
        v8 = 16; /*0x57105d*/
        v9 = "Look behind you!"; /*0x571063*/
        goto LABEL_173; /*0x57106a*/
      }
      v15 = v14 - 1; /*0x570fef*/
      if ( !v15 ) /*0x570ff2*/
      {
        v8 = 25; /*0x57104b*/
        v9 = "I thought I saw something"; /*0x571051*/
        goto LABEL_173; /*0x571058*/
      }
      v16 = v15 - 1; /*0x570ff4*/
      if ( !v16 ) /*0x570ff7*/
      {
        v8 = 30; /*0x571039*/
        v9 = "Maybe it's just my imagination"; /*0x57103f*/
        goto LABEL_173; /*0x571046*/
      }
      v17 = v16 - 1; /*0x570ff9*/
      if ( !v17 ) /*0x570ffc*/
      {
        v8 = 10; /*0x571027*/
        v9 = "Or was it?"; /*0x57102d*/
        goto LABEL_173; /*0x571034*/
      }
      if ( v17 == 1 ) /*0x571001*/
      {
        sub_3F5A0((void *)a2, "DUN DUN DUN!", 0xCu); /*0x571017*/
        a1[107] = 0; /*0x57101c*/
      }
      goto LABEL_174; /*0x571022*/
    case 0x68: /*0x570ecf*/
      v18 = a1[108]; /*0x57106f*/
      if ( !v18 ) /*0x571077*/
      {
        v8 = 32; /*0x5710d0*/
        v9 = "Don't you get tired of clicking?"; /*0x5710d6*/
        goto LABEL_173; /*0x5710dd*/
      }
      v19 = v18 - 1; /*0x571079*/
      if ( !v19 ) /*0x57107c*/
      {
        v8 = 24; /*0x5710be*/
        v9 = "I mean, isn't it boring?"; /*0x5710c4*/
        goto LABEL_173; /*0x5710cb*/
      }
      v20 = v19 - 1; /*0x57107e*/
      if ( !v20 ) /*0x571081*/
      {
        v8 = 17; /*0x5710ac*/
        v9 = "Click click click"; /*0x5710b2*/
        goto LABEL_173; /*0x5710b9*/
      }
      if ( v20 == 1 ) /*0x571086*/
      {
        sub_3F5A0((void *)a2, "Is that all you do?", 0x13u); /*0x57109c*/
        a1[107] = 0; /*0x5710a1*/
      }
      goto LABEL_174; /*0x5710a7*/
    case 0x69: /*0x570ecf*/
      v21 = a1[108]; /*0x5710e2*/
      if ( !v21 ) /*0x5710ea*/
      {
        v8 = 28; /*0x57115a*/
        v9 = "I heard a joke the other day"; /*0x571160*/
        goto LABEL_173; /*0x571167*/
      }
      v22 = v21 - 1; /*0x5710ec*/
      if ( !v22 ) /*0x5710ef*/
      {
        v8 = 25; /*0x571148*/
        v9 = "Two cubes walk into a bar"; /*0x57114e*/
        goto LABEL_173; /*0x571155*/
      }
      v23 = v22 - 1; /*0x5710f1*/
      if ( !v23 ) /*0x5710f4*/
      {
        v8 = 31; /*0x571136*/
        v9 = "wait... did they walk or slide?"; /*0x57113c*/
        goto LABEL_173; /*0x571143*/
      }
      v24 = v23 - 1; /*0x5710f6*/
      if ( !v24 ) /*0x5710f9*/
      {
        v8 = 28; /*0x571124*/
        v9 = "I don't think cubes can walk"; /*0x57112a*/
        goto LABEL_173; /*0x571131*/
      }
      if ( v24 == 1 ) /*0x5710fe*/
      {
LABEL_45:
        sub_3F5A0((void *)a2, "Nevermind...", 0xCu); /*0x571104*/
        a1[107] = 0; /*0x571119*/
      }
      goto LABEL_174; /*0x57111f*/
    case 0x78: /*0x570ecf*/
      v25 = a1[108]; /*0x57116c*/
      if ( !v25 ) /*0x571174*/
      {
        v8 = 25; /*0x5711cd*/
        v9 = "Are you always like this?"; /*0x5711d3*/
        goto LABEL_173; /*0x5711da*/
      }
      v26 = v25 - 1; /*0x571176*/
      if ( !v26 ) /*0x571179*/
      {
        v8 = 25; /*0x5711bb*/
        v9 = "I mean, what's the point?"; /*0x5711c1*/
        goto LABEL_173; /*0x5711c8*/
      }
      v27 = v26 - 1; /*0x57117b*/
      if ( !v27 ) /*0x57117e*/
      {
        v8 = 43; /*0x5711a9*/
        v9 = "Let me guess, you're gonna push the button?"; /*0x5711af*/
        goto LABEL_173; /*0x5711b6*/
      }
      if ( v27 == 1 ) /*0x571183*/
      {
        sub_3F5A0((void *)a2, "What a surprise...", 0x12u); /*0x571199*/
        a1[107] = 0; /*0x57119e*/
      }
      goto LABEL_174; /*0x5711a4*/
    case 0x79: /*0x570ecf*/
      v28 = a1[108]; /*0x5711df*/
      if ( !v28 ) /*0x5711e7*/
      {
        v8 = 13; /*0x571240*/
        v9 = "Roses are red"; /*0x571246*/
        goto LABEL_173; /*0x57124d*/
      }
      v29 = v28 - 1; /*0x5711e9*/
      if ( !v29 ) /*0x5711ec*/
      {
        v8 = 16; /*0x57122e*/
        v9 = "Violets are blue"; /*0x571234*/
        goto LABEL_173; /*0x57123b*/
      }
      v30 = v29 - 1; /*0x5711ee*/
      if ( !v30 ) /*0x5711f1*/
      {
        v8 = 21; /*0x57121c*/
        v9 = "Click the back button"; /*0x571222*/
LABEL_173:
        sub_3F5A0((void *)a2, v9, v8); /*0x5719e8*/
        goto LABEL_174; /*0x5719eb*/
      }
      if ( v30 == 1 ) /*0x5711f6*/
      {
        sub_3F5A0((void *)a2, "So I get rid of you", 0x13u); /*0x57120c*/
        a1[107] = 0; /*0x571211*/
      }
LABEL_174:
      ++a1[108]; /*0x5719f0*/
      return a2;
    default:
      v8 = 7; /*0x5719db*/
      v9 = "zzzZZZZ"; /*0x5719e1*/
      goto LABEL_173; /*0x5719e1*/
  }
}

// [5/6] Address: 0x572c70
// Method: SecretLayer::onBack
// Hidden C++ exception states: #wind=1
bool __fastcall SecretLayer_onBack(_QWORD **a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct cocos2d::CCScene *v5; // rax
  struct cocos2d::CCScene *v6; // rbx
  __int64 v7; // rcx
  cocos2d::CCDirector *v8; // rax
  void *v10; // [rsp+30h] [rbp+8h]

  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[56] + 1032LL))(a1[56], 0); /*0x572c85*/
  ((void (__fastcall *)(_QWORD **, _QWORD))(*a1)[124])(a1, 0); /*0x572c93*/
  if ( !qword_905FD0 ) /*0x572ca3*/
  {
    v10 = operator new(0x6E8u); /*0x572caf*/
    qword_905FD0 = sub_2723A0(v10); /*0x572cbd*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x572cce*/
  }
  sub_2732D0(); /*0x572cd7*/
  v5 = (struct cocos2d::CCScene *)MenuLayer_scene(0, v2, v3, v4); /*0x572cde*/
  v6 = cocos2d::CCTransitionFade::create(0.5, v5); /*0x572cf4*/
  v8 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v7); /*0x572cf7*/
  return cocos2d::CCDirector::replaceScene(v8, v6); /*0x572d03*/
}

// [6/6] Address: 0x572d10
// Method: SecretLayer::keyBackClicked
bool __fastcall SecretLayer_keyBackClicked(__int64 a1)
{
  return SecretLayer_onBack((_QWORD **)(a1 - 336));
}
