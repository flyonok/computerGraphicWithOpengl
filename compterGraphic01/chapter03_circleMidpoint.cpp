#include "stdafx.h"
#include <GLES/glew.h>
#include <freeGL/glut.h>
#include "chapter03.h"

class scrPt {
public:
	GLint x, y;
};
static void circlePlotPoints(scrPt circCtr, scrPt circPt);

/*void setPixel(GLint x, GLint y)
{
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
}
*/


static void circleMidpoint(scrPt circCtr, GLint radius)
{
	scrPt circPt;

	GLint p = 1 - radius;         // Initial value of midpoint parameter.

	circPt.x = 0;             // Set coordinates for top point of circle.
	circPt.y = radius;

	/* Plot the initial point in each circle quadrant. */
	circlePlotPoints(circCtr, circPt);

	/* Calculate next points and plot in each octant. */
	while (circPt.x < circPt.y) {
		circPt.x++;
		if (p < 0)
			p += 2 * circPt.x + 1;
		else {
			circPt.y--;
			p += 2 * (circPt.x - circPt.y) + 1;
		}
		circlePlotPoints(circCtr, circPt);
	}
}

static void circlePlotPoints(scrPt circCtr, scrPt circPt)
{
	setPixel(circCtr.x + circPt.x, circCtr.y + circPt.y, 128, 0, 0);
	setPixel(circCtr.x - circPt.x, circCtr.y + circPt.y, 128, 0, 0);
	setPixel(circCtr.x + circPt.x, circCtr.y - circPt.y, 128, 0, 0);
	setPixel(circCtr.x - circPt.x, circCtr.y - circPt.y, 128, 0, 0);
	setPixel(circCtr.x + circPt.y, circCtr.y + circPt.x, 128, 0, 0);
	setPixel(circCtr.x - circPt.y, circCtr.y + circPt.x, 128, 0, 0);
	setPixel(circCtr.x + circPt.y, circCtr.y - circPt.x, 128, 0, 0);
	setPixel(circCtr.x - circPt.y, circCtr.y - circPt.x, 128, 0, 0);
}



void displayCircle()
{
	scrPt pt;
	pt.x = 100, pt.y = 100;
	glClear(GL_COLOR_BUFFER_BIT);
	circleMidpoint(pt, 20);
	glutSwapBuffers();
	glutPostRedisplay();
}
