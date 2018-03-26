#include "stdafx.h"
#include "chapter03.h"

int point[6][2] = { { 80,100 },{ 95, 75 }, { 125, 75},{140, 100},{125, 125},{95,125} };
int quads[8][2] = { { 40, 120 },{ 60, 90 },{ 80, 90 },{ 70, 115 }, {110, 120 }, {130, 90}, {150, 90}, {155, 115} };

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

void drawTriangleStrip()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 1.0, 1.0);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2iv(point[0]);
	glVertex2iv(point[1]);
	glVertex2iv(point[5]);
	glColor3f(0.0f, 1.0f, 0.0f); // diffirent color
	glVertex2iv(point[2]);
	glColor3f(0.0f, 0.0f, 1.0f); // diffirent color
	glVertex2iv(point[4]);
	glColor3f(1.0f, 0.0f, 1.0f); // diffirent color
	glVertex2iv(point[3]);
	glEnd();
	glutSwapBuffers();
	glutPostRedisplay();
}

void drawTriangleFan()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 1.0, 1.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2iv(point[0]);
	glVertex2iv(point[1]);
	glVertex2iv(point[2]);
	glColor3f(0.0f, 1.0f, 0.0f); // diffirent color
	glVertex2iv(point[3]);
	glColor3f(0.0f, 0.0f, 1.0f); // diffirent color
	glVertex2iv(point[4]);
	glColor3f(1.0f, 0.0f, 1.0f); // diffirent color
	glVertex2iv(point[5]);
	glEnd();
	glutSwapBuffers();
	glutPostRedisplay();
}

// ËÄ±ßÐÎ
void drawQuads() 
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2iv(quads[0]);
	glVertex2iv(quads[1]);
	glVertex2iv(quads[2]);
	glVertex2iv(quads[3]);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2iv(quads[4]);
	glVertex2iv(quads[5]);
	glVertex2iv(quads[6]);
	glVertex2iv(quads[7]);
	
	glEnd();
	glutSwapBuffers();
	glutPostRedisplay();
}

void drawQuadStrip()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 1.0, 1.0);
	glBegin(GL_QUAD_STRIP);
	glVertex2iv(quads[0]);
	glVertex2iv(quads[1]);
	glVertex2iv(quads[3]);
	glVertex2iv(quads[2]);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2iv(quads[4]);
	glVertex2iv(quads[5]);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2iv(quads[7]);
	glVertex2iv(quads[6]);
	

	glEnd();
	glutSwapBuffers();
	glutPostRedisplay();
}