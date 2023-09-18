
#include "butler.h"
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>

Butler::Butler() {
    // Load 3D model
    model = new Model("assets/models/butler.obj");
}

void Butler::draw(QOpenGLShaderProgram *program) {
    // Bind the model's VAO
    model->vao.bind();

    // Draw the model
    QOpenGLFunctions *functions = QOpenGLContext::currentContext()->functions();
    functions->glDrawElements(GL_TRIANGLES, model->indexCount, GL_UNSIGNED_INT, 0);

    // Release the model's VAO
    model->vao.release();
}

void Butler::update() {
    // Update the butler's state
}

Butler::~Butler() {
    delete model;
}
