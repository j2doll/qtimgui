// MainWindow.cpp

#include "MainWindow.h"

MainWindow::~MainWindow()
{
    if ( mainImGui != nullptr )
    {
        delete mainImGui;
        mainImGui = nullptr;
    }
}

void MainWindow::initializeGL()
{
    // TODO: define your configuration
    QString strWindowTitle = ""; // "QtImGui widget example";
    clear_color = ImColor(114, 144, 154);

    setWindowTitle(strWindowTitle);
    mainImGui = new MainImGui(clear_color);

    initializeOpenGLFunctions();
    QtImGui::initialize(this);
}

void MainWindow::paintGL()
{
    QtImGui::newFrame();

    renderImGui();

    // Do render before ImGui UI is rendered
    glViewport(0, 0, width(), height());
    glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
    glClear(GL_COLOR_BUFFER_BIT);

    ImGui::Render();
}

void MainWindow::renderImGui()
{
    mainImGui->renderImGui();
}



