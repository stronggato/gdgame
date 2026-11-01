cmake_minimum_required(VERSION 3.20)
project(GeometryDashSource LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Includes
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/include/Geode
    ${CMAKE_CURRENT_SOURCE_DIR}/include/Geode/binding
)

# Source files
file(GLOB_RECURSE GD_SOURCES 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

add_library(GeometryDashCore STATIC ${GD_SOURCES})

target_compile_definitions(GeometryDashCore PRIVATE
    WIN32
    _WINDOWS
    NOMINMAX
)

if (MSVC)
    target_compile_options(GeometryDashCore PRIVATE /bigobj /utf-8 /permissive-)
endif()
