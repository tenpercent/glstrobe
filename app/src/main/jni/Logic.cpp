
#include "Logic.h"
#include <EGL/egl.h>
#include <GLES2/gl2.h>
//#include "defines.h"

static GLfloat colors[] = {0.f, 0.f, 0.f, 0.f};

void Logic::drawFrame() {
    glClearColor(colors[0], colors[1], colors[2], colors[3]);

    glClear( GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT );

    colors[0] += 0.003f;
    colors[1] += 0.007f;
    colors[2] += 0.011f;
    colors[3] += 0.013f;

    for (auto &c : colors)
    {
        if (c > 1.f)
            c -= 1.f;
    }
}

void Logic::initContext(int w, int h) {
    glViewport(0, 0, w, h);
}
