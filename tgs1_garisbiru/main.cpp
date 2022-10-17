//PROGRAM GARIS BIRU

#include <windows.h>;
#include <GL/glut.h>

void garisBiru() {
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,1.0);
    glVertex2i(100,200);
    glVertex2i(250,200);
    glEnd();
    glFlush();
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    garisBiru();
}

int main (int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitWindowPosition(250,250);
    glutInitWindowSize(500,500);
    glutCreateWindow("Menggambar garis biru");
    glClearColor(1.0,1.0,1.0,0.0);
    gluOrtho2D(0.0,500.0,-250,250);
    glutDisplayFunc(display);
    glutMainLoop(); //
    return 0;
}

//fldzhcntik skliiii
