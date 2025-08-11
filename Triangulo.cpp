#include "Triangulo.h"

void Triangulo::dibujarTriangulo(float x, float y, float z) {

    glTranslatef(x, y, z);
    glPushMatrix();

        glPushMatrix();
            glTranslatef(-1.5, 0.0, 0.0);
            glutSolidTeapot(0.5);
        glPopMatrix();

        glPushMatrix();
            glTranslatef(-1.0, 1.0, 1.0);
            glBegin(GL_TRIANGLES);
                //manecillas del reloj
                glVertex3f(1, 0, 0);
                glVertex3f(0, 1, 0);
                glVertex3f(-1, 0, 0);
            glEnd();
        glPopMatrix();

    glPopMatrix();

}