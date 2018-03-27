#pragma once
#include <GLES/glew.h>
#include <freeGL/glut.h>
class scrPt {
public:
	GLint x, y;
};
void displayLineDDA();
void setPixel(int x, int y, GLfloat red, GLfloat green, GLfloat blue);
void circleMidpoint(scrPt circCtr, GLint radius);
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