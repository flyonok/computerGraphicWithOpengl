// compterGraphic01.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"



#include <GLES/glew.h>
#include <freeGL/glut.h>      // (or others, depending on the system in use)
#include "chapter03.h"

static void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);  // Set display-window color to white.

	glMatrixMode(GL_PROJECTION);       // Set projection parameters.
	gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

static void init3D(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);  // Set display-window color to white.
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-2, 2, -2, 2, 5, -5);
}

static void lineSegment(void)
{
	glClear(GL_COLOR_BUFFER_BIT);  // Clear display window.

	glColor3f(0.0, 0.0, 1.0);      // Set line segment color to red.
	glBegin(GL_LINES);
	glVertex2i(180, 15);       // Specify line-segment geometry.
	glVertex2i(10, 145);
	glEnd();

	// glFlush();     // Process all OpenGL routines as quickly as possible.
	glutSwapBuffers();
	glutPostRedisplay();
	/*
	Since you are using a double buffered window
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	you have to call glutSwapBuffers instead of glFlush.
	If you would use a single buffered window
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE | GLUT_DEPTH);
	then glFlush would work.
	Further I recommend to redisplayed the window continuously glutPostRedisplay
	Change your code somehow like this:
	void display()
	{
	glClear(GL_COLOR_BUFFER_BIT);
	bres();
	//glFlush();
	glutSwapBuffers();
	glutPostRedisplay();
	}
	*/
}

/*
void main(int argc, char** argv)
{
	glutInit(&argc, argv);                         // Initialize GLUT.
	// glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);   // Set display mode.
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE | GLUT_DEPTH); // glutSwapBuffers();
	glutInitWindowPosition(50, 100);   // Set top-left display-window position.
	glutInitWindowSize(400, 300);      // Set display-window width and height.
	glutCreateWindow("An Example OpenGL Program"); // Create display window.

	init();                            // Execute initialization procedure.
	// init3D();
	// glutDisplayFunc(lineSegment);       // Send graphics to display window.
	// glutDisplayFunc(displayLineDDA);
	// glutDisplayFunc(displayCircle);
	// glutDisplayFunc(displayLineBres);
	// glutDisplayFunc(displayEllipseMidpoint);
	// glutDisplayFunc(drawRect);
	// glutDisplayFunc(drawPolygon);
	// glutDisplayFunc(drawTriangles);
	// glutDisplayFunc(drawTriangleStrip);
	// glutDisplayFunc(drawTriangleFan);
	// glutDisplayFunc(drawQuads);
	// glutDisplayFunc(drawQuadStrip);
	// glutDisplayFunc(cube);
	glutDisplayFunc(regHexagon);
	glutReshapeFunc(winReshapeFcn);

	glutMainLoop();                    // Display everything and wait.
}
*/

