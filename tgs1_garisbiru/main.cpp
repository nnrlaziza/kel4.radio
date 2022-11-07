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

//grafkom mantap

//fldzhcntik skliiii
//annisatarimana












































































































































































 void bilah (float r_inner,float r_outer,float tebal,int batang)
    {
    float i;
    glPushMatrix();
    glTranslatef(0.0,0.0,-tebal/4);
    cylinder(r_inner,r_inner,tebal);
    glTranslatef(0.0,0.0,tebal/2);
    glRotatef(90,0.0,1.0,0.0);
    for(i=0;i<batang;i++)
        {
        glTranslatef(0.0,0.0,r_inner);
        glRotatef(315,0.0,0.0,1.0);
        blok(0.5,r_inner*4.5,(r_outer-r_inner+(r_inner/4))*2);
        glRotatef(45,0.0,0.0,1.0);
        glTranslatef(0.0,0.0,-r_inner);
        glRotatef(360/batang,1.0,0.0,0.0);
        }
    glPopMatrix();
    }


    void blok(float tebal,int ratiol,int ratiop)
    {
    float i,j;
    glPushMatrix();
        for(i=0;i<ratiop;i++)
        {
        glTranslatef(-(ratiol+1)*tebal/2,0.0,0.0);
        for(j=0;j<ratiol;j++)
            {
            glTranslatef(tebal,0.0,0.0);
            glutSolidCube(tebal); // membuat kubus
            }
        glTranslatef(-(ratiol-1)*tebal/2,0.0,tebal);
        }
    glPopMatrix();
    }

    //efek keyboard
    void keyboard_s(int key,int x,int y)
    {
        if (rotation_y_plus !=0)
        direction=(rotation_y_plus/abs(rotation_y_plus));
        else
        direction=-1;
        switch(key)
        {
        case GLUT_KEY_UP:// menaikan kipas
            rotation_y_plus++;
            break;
        case GLUT_KEY_DOWN:// menurunkan kipas
            rotation_y_plus--;
            break;
        case GLUT_KEY_END:// stop kipas
            rotation_y_plus=0;
            speed1=false;
            pressplus1=0;
            speed2=false;
            pressplus2=0;
            speed3=false;
            pressplus3=0;
            speed4=false;
            pressplus4=0;
            pressplus5=180;
            Toleh=false;
            break;
