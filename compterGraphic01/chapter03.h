#pragma once
#include <GLES/glew.h>
#include <freeGL/glut.h>
void displayLineDDA();
void setPixel(int x, int y, GLfloat red, GLfloat green, GLfloat blue);
void displayCircle();
void displayLineBres();
void displayEllipseMidpoint();
void drawRect();
void drawPolygon();
void drawTriangles();
void drawTriangleStrip();
void drawTriangleFan();
void drawQuads();
void drawQuadStrip();
void cube();
// reshape function
void regHexagon();
void winReshapeFcn(int newWidth, int newHeight);