#pragma once

#ifdef _MSC_VER
    #pragma warning(disable : 4251) // dll-interface
    #pragma warning(disable : 4099) // type first seen as 'class'
    #pragma warning(disable : 4584) // CCKeyboardDelegate included twice in UILayer
#endif

#include <Geode/Enums.hpp>

#include <Geode/DefaultInclude.hpp>
#include <fmod.hpp>
#include <stdint.h>
#include <type_traits>
#include <array>
#include <unordered_map>
#include <algorithm>

#define CLASSPARAM(...)
#define STRUCTPARAM(...)

#include <Geode/cocos/include/cocos2d.h>
#include <Geode/cocos/CCDirector.h>
#include <Geode/cocos/particle_nodes/CCParticleSystem.h>
#include <Geode/cocos/particle_nodes/CCParticleSystemQuad.h>
#include <Geode/cocos/extensions/network/HttpRequest.h>
#include <Geode/cocos/extensions/network/HttpClient.h>
#include <Geode/cocos/extensions/GUI/CCControlExtension/CCControlExtensions.h>

#include <Geode/GeneratedBinding.hpp>
