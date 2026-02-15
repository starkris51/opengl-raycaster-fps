cmake_minimum_required(VERSION 4.2)
project(opengl-sdl3-project VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenGL REQUIRED)
find_package(SDL3 REQUIRED)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(opengl-sdl3-project ${SOURCES})

target_include_directories(opengl-sdl3-project PRIVATE include)

target_compile_definitions(opengl-sdl3-project PRIVATE GL_GLEXT_PROTOTYPES=1)

target_link_libraries(opengl-sdl3-project
    SDL3::SDL3
    OpenGL::GL
)
