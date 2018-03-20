#include "stdafx.h"
#include "chapter03.h"
#include <GLES/glew.h>
#include <freeGL/glut.h>

void setPixel(int x, int y, GLfloat red, GLfloat green, GLfloat blue)
{
	glBegin(GL_POINTS);
	glColor3f(red, green, blue);
	glVertex2i(x,y);
	glEnd();
}