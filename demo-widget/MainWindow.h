// MainWindow.h

// boiler-plate code {{
#include <QtGlobal>
#include <QTimer>

#include <QOpenGLWidget>
#include <QOpenGLExtraFunctions>
#include <QSurfaceFormat>

#include <QtImGui.h>
#include <imgui.h>

class MainWindow : public QOpenGLWidget, protected QOpenGLExtraFunctions
{
protected:
    void initializeGL() override;
    void paintGL() override;

    void renderImGui();

protected:
    ImVec4 clear_color;
// boiler-plate code }}

    bool show_test_window = true;
    bool show_another_window = false;

// boiler-plate code {{
};
// boiler-plate code }}

