#pragma once
#include <SDL3/SDL.h>
#include <exception>

class App
{
public:
    App();
    ~App();

    App(const App &) = delete;
    App &operator=(const App &) = delete;
    App(App &&) = delete;
    App &operator=(App &&) = delete;

    void run();

private:
    void init();
    void handleEvent(const SDL_Event &e);
    void render();
    void shutdown();

    SDL_Window *window = nullptr;
    SDL_GLContext glContext = nullptr;
    bool running = false;
    bool sdlInitialized = false;
    char title[128];

    unsigned int VBO = 0;
    unsigned int VAO = 0;
    unsigned int shaderProgram;
    unsigned int vertexShader;
    unsigned int fragmentShader;

    Uint64 fpsLastTicks = 0;
    int fpsFrames = 0;
    float fpsValue = 0.0f;
};