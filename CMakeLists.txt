cmake_minimum_required(VERSION 3.20)
project(GeometryDash LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Header include paths
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/include/Geode
    ${CMAKE_CURRENT_SOURCE_DIR}/include/Geode/binding
    ${CMAKE_CURRENT_SOURCE_DIR}/include/Geode/cocos
    ${CMAKE_CURRENT_SOURCE_DIR}/include/Geode/cocos/include
    ${CMAKE_CURRENT_SOURCE_DIR}/include/Geode/cocos/extensions
    ${CMAKE_CURRENT_SOURCE_DIR}/include/Geode/cocos/kazmath/include
    ${CMAKE_CURRENT_SOURCE_DIR}/include/Geode/fmod
)

link_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/lib
)

# Source files
file(GLOB_RECURSE GD_SOURCES 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

add_executable(GeometryDash WIN32
    ${GD_SOURCES}
)

target_compile_definitions(GeometryDash PRIVATE
    WIN32
    _WINDOWS
    NOMINMAX
    _CRT_SECURE_NO_WARNINGS
    CC_ENABLE_CHIPMUNK_INTEGRATION=1
)

if (MSVC)
    target_compile_options(GeometryDash PRIVATE 
        /bigobj 
        /utf-8 
        /permissive-
        /W3
        /EHsc
        /FIdefs.h
    )
endif()

# Native DLL import libraries
target_link_libraries(GeometryDash PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/libcocos2d.lib
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/libExtensions.lib
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/fmod.lib
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/glew32.lib
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/sqlite3.lib
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/steam_api64.lib
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/libcurl.lib
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/zlib1.lib
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/pthreadVC3.lib
    opengl32.lib
    ws2_32.lib
    user32.lib
    gdi32.lib
    shell32.lib
    ole32.lib
    advapi32.lib
)
