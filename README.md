# Geometry Dash 2.209 (Build 25909607) Reconstructed C++ Source

Full reverse-engineered source codebase for **Geometry Dash 2.209 (Windows x64)**.

## Architecture & Layout
* **Target OS / Arch**: Windows x64 (MSVC ABI)
* **Engine**: Cocos2d-x 2.2.3 (Customized RobTop branch)
* **Audio**: FMOD Studio Core Audio API (`fmod.dll`)
* **Graphics API**: OpenGL / GLEW (`glew32.dll`)

## Repository Structure
* `include/Geode/binding/`: **815 C++ class headers** with exact member variables, class sizes, inheritance trees, and vtable layouts matching the 2.209 binary.
* `src/`: Reconstructed C++ method implementations extracted and decompiled from the native 64-bit binary via Hex-Rays / IDA Pro.
  * `PlayerObject.cpp`: 109 methods (physics, rotation, ring jump, gravity, vehicles, collision).
  * `PlayLayer.cpp`: 80 methods (level loop, checkpoint management, object dispatch, camera, death logic).
  * `GameManager.cpp`: 51 methods (user preferences, account linking, settings, custom icons).
  * `FMODAudioEngine.cpp`: 45 methods (music sync, channel volume, pitch, DSP effects).
  * `AccountHelpLayer.cpp`: Account management and dialogs.

## Build Requirements
* CMake 3.20+
* Visual Studio 2022 (MSVC v143 toolset, C++20 standard)
* Windows SDK 10.0+

```bash
mkdir build
cd build
cmake .. -G "Visual Studio 17 2022" -A x64
cmake --build . --config Release
```
