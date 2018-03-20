#include "stdafx.h"
#include <stdlib.h>
#include <math.h>
// #include <Windows.h>
#include "chapter03.h"
#include <GLES/glew.h>
#include <freeGL/glut.h>

inline int round(const float a) { return int(a + 0.5); }

static void lineDDA(int x0, int y0, int xEnd, int yEnd)
{
	int dx = xEnd - x0, dy = yEnd - y0, steps, k;
	float xIncrement, yIncrement, x = x0, y = y0;

	if (fabs(dx) > fabs(dy))
		steps = fabs(dx);
	else
		steps = fabs(dy);
	xIncrement = float(dx) / float(steps);
	yIncrement = float(dy) / float(steps);

	// setPixel(round(x), round(y));
	/*
	glBegin(GL_POINTS);
	glColor3f(128, 0, 0);
	glVertex2i(round(x), round(y));
	glEnd();
	*/
	setPixel(round(x), round(y), 128, 0, 0);


	for (k = 0; k < steps; k++) {
		x += xIncrement;
		y += yIncrement;
		// setPixel(round(x), round(y));
		/*
		glBegin(GL_POINTS);
		glColor3f(128, 0, 0);
		glVertex2i(round(x), round(y));
		glEnd();
		*/
		setPixel(round(x), round(y), 128, 0, 0);
	}
}

void displayLineDDA()
{
	int x0 = 10, y0 = 20, xEnd = 100, yEnd = 200;
	glClear(GL_COLOR_BUFFER_BIT);
	lineDDA(x0, y0, xEnd, yEnd);
	// glFlush();
	glutSwapBuffers();
	glutPostRedisplay();

}
