#include "stdafx.h"
#include "chapter03.h"
typedef GLint vertex3[3];
/*GLint point[8][3] = { {0, 0, 0}, {0,1,0}, {1,0,0}, {1,1,0},
{0,0,1}, {0, 1, 1}, {1,0,1}, {1,1,1} };*/
static vertex3 point[8] = { { 0, 0, 0 },{ 0,1,0 },{ 1,0,0 },{ 1,1,0 },
{ 0,0,1 },{ 0, 1, 1 },{ 1,0,1 },{ 1,1,1 } };

static void quad(GLint n1, GLint n2, GLint n3, GLint n4)
{
	glBegin(GL_QUADS);
	glVertex3iv(point[n1]);
	glVertex3iv(point[n2]);
	glVertex3iv(point[n3]);
	glVertex3iv(point[n4]);
	glEnd();
}
// 暂时不能使用
void cube()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 1.0, 1.0);
	quad(6, 2, 3, 7);
	//quad(5, 1, 0, 4);
	//quad(7, 3, 1, 5);
	//quad(4, 0, 2, 6);
	//quad(2, 0, 1, 3);
	//quad(7, 5, 4, 6);
	glutSwapBuffers();
	glutPostRedisplay();
}