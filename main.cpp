#include <windows.h>
#include<iostream>
#include<GL/gl.h>
#include<GL/glut.h>
#include<math.h>
#define PI  3.14159265358979323846
using namespace std;


float _move3 = 0.0f; //bird
float _move4 = 0.0f; //cloud 1
float _move5 = 0.0f; //cloud 2


void drawScene(){
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);

    //Sky
    glPushMatrix();
      glBegin(GL_POLYGON);
      glColor3f(0.49, 1.0, 1.0);
      glVertex3f(-25, 0.0, 0.0);
      glVertex3f(-25, 11.5, 0.0);
      glVertex3f(25, 11.5, 0.0);
      glVertex3f(25, 0.0, 0.0);
      glEnd();
      glPopMatrix();

    //sun
    glPushMatrix();
    glTranslatef(0.8,0.8,0.0);
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);

    for (int i=0; i< 600;i++)
    {
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.1;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();

    //Cloud 1

    glPushMatrix();
    glTranslatef(_move4+0.2, 0.8, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);

    for(int i=0; i<600; i++)
    {
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move4+0.28, 0.8, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<600; i++)
    {
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
      }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move4+0.35, 0.8, 0.0);
      glColor3f(1.0, 1.0, 1.0);
      glBegin(GL_POLYGON);
      for(int i=0; i<600; i++)
     {
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
      }
      glEnd();
      glPopMatrix();

      glPushMatrix();
      glTranslatef(_move4+0.2, 0.75, 0.0);
      glColor3f(1.0, 1.0, 1.0);
      glBegin(GL_POLYGON);
      for(int i=0; i<600; i++)
      {
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
      }
      glEnd();
      glPopMatrix();

      glPushMatrix();
      glTranslatef(_move4+0.28, 0.75, 0.0);
      glColor3f(1.0, 1.0, 1.0);
      glBegin(GL_POLYGON);
      for(int i=0; i<600; i++)
      {
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
      }
      glEnd();
      glPopMatrix();

      glPushMatrix();
      glTranslatef(_move4+0.35, 0.75, 0.0);
      glColor3f(1.0, 1.0, 1.0);
      glBegin(GL_POLYGON);
      for(int i=0; i<600; i++)
      {
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
      }
      glEnd();
      glPopMatrix();

      glPushMatrix();
      glTranslatef(_move4+0.15, 0.77, 0.0);
      glColor3f(1.0, 1.0, 1.0);
      glBegin(GL_POLYGON);
      for(int i=0; i<600; i++)
      {
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
      }
      glEnd();
      glPopMatrix();

      glPushMatrix();
      glTranslatef(_move4+0.39, 0.77, 0.0);
      glColor3f(1.0, 1.0, 1.0);
      glBegin(GL_POLYGON);
      for(int i=0; i<600; i++)
      {
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
      }
      glEnd();
      glPopMatrix();

    //Cloud 2

    glPushMatrix();
    glTranslatef(_move5+0.6, 0.6, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<600; i++){
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move5+0.68, 0.6, 0.0);
    glColor3f(1.0, 1.0, 1.0);
      glBegin(GL_POLYGON);
      for(int i=0; i<600; i++){
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
      }
      glEnd();
      glPopMatrix();

      glPushMatrix();
      glTranslatef(_move5+0.75, 0.6, 0.0);
      glColor3f(1.0, 1.0, 1.0);
      glBegin(GL_POLYGON);
      for(int i=0; i<600; i++){
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
      }
      glEnd();
      glPopMatrix();

      glPushMatrix();
      glTranslatef(_move5+0.6, 0.65, 0.0);
      glColor3f(1.0, 1.0, 1.0);
      glBegin(GL_POLYGON);
      for(int i=0; i<600; i++){
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
      }
      glEnd();
      glPopMatrix();

      glPushMatrix();
      glTranslatef(_move5+0.68, 0.65, 0.0);
      glColor3f(1.0, 1.0, 1.0);
      glBegin(GL_POLYGON);
      for(int i=0; i<600; i++){
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
      }
      glEnd();
      glPopMatrix();

      glPushMatrix();
      glTranslatef(_move5+0.75, 0.65, 0.0);
      glColor3f(1.0, 1.0, 1.0);
      glBegin(GL_POLYGON);
      for(int i=0; i<600; i++){
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
      }
      glEnd();
      glPopMatrix();

      glPushMatrix();
      glTranslatef(_move5+0.55, 0.62, 0.0);
      glColor3f(1.0, 1.0, 1.0);
      glBegin(GL_POLYGON);
      for(int i=0; i<600; i++){
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
      }
      glEnd();
      glPopMatrix();

      glPushMatrix();
      glTranslatef(_move5+0.79, 0.62, 0.0);
      glColor3f(1.0, 1.0, 1.0);
      glBegin(GL_POLYGON);
      for(int i=0; i<600; i++){
        float pi = 3.1416;
        float A = (i*2*pi)/100;
        float r = 0.05;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
      }
      glEnd();
      glPopMatrix();


    glutSwapBuffers();
}



void update(int value){



    _move3 -=0.01f;
    if(_move3+1.966 < -1.0)
    {
        _move3 = 1.0;
    }

    _move4 +=0.0005f;
    if(_move4-1.39 > 1.0)
    {
        _move4 = -1.4;
    }

    _move5 +=0.0006f;
    if(_move5-0.79>1.0)
    {
        _move5 = -1.4;
    }




    glutPostRedisplay();

    glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1200, 1200);
    glutCreateWindow("City By The Lake");
    glutDisplayFunc(drawScene);
    glutTimerFunc(25, update, 0);
    glutMainLoop();
    return 0;

}


//bikrom
