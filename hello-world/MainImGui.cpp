// MainImGui.cpp

#include "MainImGui.h"

// NOTE: For portability, use only standard C++ code or OpenGL code.

MainImGui::MainImGui(ImVec4 clearColor)
{
    clear_color = clearColor;

    show_test_window = true;
    show_another_window = false;
}

MainImGui::~MainImGui()
{

}

void MainImGui::renderImGui()
{
    using namespace ImGui;

    // 1. Show a simple window
    // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets appears in a window automatically called "Debug"
    {
        static float f = 0.0f;
        Text("Hello, world!");
        SliderFloat("float", &f, 0.0f, 1.0f);
        ColorEdit3("clear color", (float*)&clear_color);
        if (Button("Test Window"))
            show_test_window ^= 1;
        if (Button("Another Window"))
            show_another_window ^= 1;
        Text("Application average %.3f ms/frame (%.1f FPS)",
             1000.0f / GetIO().Framerate, GetIO().Framerate);
    }

    // 2. Show another simple window, this time using an explicit Begin/End pair
    if (show_another_window)
    {
        SetNextWindowSize(ImVec2(200,100), ImGuiCond_FirstUseEver);
        Begin("Another Window", &show_another_window);
        Text("Hello");
        End();
    }

    // 3. Show the ImGui test window. Most of the sample code is in ImGui::ShowTestWindow()
    if (show_test_window)
    {
        SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver);
        ShowDemoWindow();
    }

}
