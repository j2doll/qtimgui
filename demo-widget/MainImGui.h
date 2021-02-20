// MainImGui.h

#ifndef MainImGui_h
#define MainImGui_h

// NOTE: For portability, use only standard C++ code or OpenGL code.

#include <imgui.h>

class MainImGui
{
public:
    MainImGui(ImVec4 clearColor = ImColor(114, 144, 154));
    virtual ~MainImGui();

    void renderImGui();

protected:
    ImVec4 clear_color;

    bool show_test_window;
    bool show_another_window;

};

#endif