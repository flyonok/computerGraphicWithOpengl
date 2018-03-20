#include "stdafx.h"
#include <stdlib.h>
#include <math.h>
#include "chapter03.h"

/*  Bresenham line-drawing procedure for |m| < 1.0.  */
static void lineBres(int x0, int y0, int xEnd, int yEnd)
{
	int dx = fabs(xEnd - x0), dy = fabs(yEnd - y0);
	int p = 2 * dy - dx;
	int twoDy = 2 * dy, twoDyMinusDx = 2 * (dy - dx);
	int x, y;

	/* Determine which endpoint to use as start position.  */
	if (x0 > xEnd) {
		x = xEnd;
		y = yEnd;
		xEnd = x0;
	}
	else {
		x = x0;
		y = y0;
	}
	setPixel(x, y, 0, 128, 128);

	while (x < xEnd) {
		x++;
		if (p < 0)
			p += twoDy;
		else {
			y++;
			p += twoDyMinusDx;
		}
		setPixel(x, y, 0, 128, 128);
	}
}

void displayLineBres()
{
	int x0 = 10, y0 = 20, xEnd = 100, yEnd = 200;
	glClear(GL_COLOR_BUFFER_BIT);
	lineBres(x0, y0, xEnd, yEnd);
	// glFlush();
	glutSwapBuffers();
	glutPostRedisplay();
}
