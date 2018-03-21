#include "stdafx.h"
#include "chapter03.h"

int point[6][2] = { { 80,100 },{ 95, 75 }, { 125, 75},{140, 100},{125, 125},{95,125} };

void drawRect()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 0);
	// lineBres(x0, y0, xEnd, yEnd);
	// glFlush();
	int vertex1[] = { 20, 60 };
	int vertex2[] = { 110, 150 };
	glRectiv(vertex1, vertex2);
	glutSwapBuffers();
	glutPostRedisplay();
}

void drawPolygon()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2iv(point[0]);
	glVertex2iv(point[1]);
	glVertex2iv(point[2]);
	glVertex2iv(point[3]);
	glVertex2iv(point[4]);
	glVertex2iv(point[5]);
	glEnd();
	glutSwapBuffers();
	glutPostRedisplay();
}

void drawTriangles()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 1.0, 1.0);
	glBegin(GL_TRIANGLES);
	glVertex2iv(point[0]);
	glVertex2iv(point[1]);
	glVertex2iv(point[5]);
	glVertex2iv(point[2]);
	glVertex2iv(point[3]);
	glVertex2iv(point[4]);
	glEnd();
	glutSwapBuffers();
	glutPostRedisplay();

}