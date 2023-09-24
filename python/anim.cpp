//blender program to animate object(weapon in this case) in a circular motion

#include <Python.h>//req as everything is in python, c#,r and others.
#include <iostream>
#include <cmath>
#include <GL/glut.h>//animation window so wont work on normal editors, for restricted use only
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

using namespace std;

#define PI 3.141592653589
#define DEG2RAD(deg) (deg * PI / 180)

float x = 0.0f;
float y = 0.0f;
float r = 0.0f;

float x1 = 0.0f;
float y1 = 0.0f;
float r1 = 0.0f;

float theta = 0.0f;
float theta1 = 0.0f;

void drawScene();
void update(int value);
void drawBox(float len);

void drawBox(float len) {

    glPushMatrix();
    glTranslatef(0.0, 0.0, len / 2);
    glScalef(1.0, 1.0, len);
    glutSolidCube(len);
    glPopMatrix();
}

void drawScene() {

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(x, y, 0.0f);
    glRotatef(theta, 0.0f, 0.0f, 1.0f);
    glTranslatef(-x, -y, 0.0f);
    glTranslatef(x, y, 0.0f);
    glTranslatef(0.0f, 0.0f, 0.0f);
    glScalef(0.5, 0.5, 0.5);
    glColor3f(0.0f, 0.0f, 1.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(x1, y1, 0.0f);
    glRotatef(theta1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-x1, -y1, 0.0f);
    glTranslatef(x1, y1, 0.0f);
    glTranslatef(0.0f, 0.0f, 0.0f);
    glScalef(0.5, 0.5, 0.5);
    glColor3f(0.0f, 0.0f, 1.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(x1, y1, 0.0f);
    glRotatef(theta2, 0.0f, 0.0f, 1.0f);
    glTranslatef(-x1, -y1, 0.0f);
    glTranslatef(x1, y1, 0.0f);
    glTranslatef(0.0f, 0.0f, 0.0f);
    glScalef(0.5, 0.5, 0.5);
    glColor3f(0.0f, 0.0f, 1.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(x1, y1, 0.0f);
    gl
    Rotatef(theta3, 0.0f, 0.0f, 1.0f);
    glTranslatef(-x1, -y1, 0.0f);
    glTranslatef(x1, y1, 0.0f);
    glTranslatef(0.0f, 0.0f, 0.0f);
    glScalef(0.5, 0.5, 0.5);
    glColor3f(0.0f, 0.0f, 1.0f);
    glutSolidCube(1.0f);
    glPopMatrix();
}

void update(int value) {

    theta += 1.0f;
    theta1 += 1.0f;

    if (theta > 360) {
        theta -= 360;
    }
    if (theta1 > 360) {
        theta1 -= 360;
    }
    x = r * cos(DEG2RAD(theta));
    y = r * sin(DEG2RAD(theta));

    x1 = r1 * cos(DEG2RAD(theta1));
    y1 = r1 * sin(DEG2RAD(theta1));

    glutPostRedisplay();
    glutTimerFunc(25, update, 0);
}

void initRendering() {

    glEnable(GL_DEPTH_TEST);
}

void handleResize(int w, int h) {

    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double) w / (double) h, 1.0, 200.0);
}

int main(int argc, char **argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(400, 400);

    glutCreateWindow("Animation");
    initRendering();

    glutDisplayFunc(drawScene);
    glutKeyboardFunc(handleKeypress);
    glutReshapeFunc(handleResize);

    glutTimerFunc(25, update, 0);

    glutMainLoop();
    return 0;
}