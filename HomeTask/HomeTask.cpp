
//HomeTask
#pragma region Home

#include <windows.h>
#include<gl/gl.h>
#include<gl/glut.h>


void initgraphics(int argc, char* argv[]);
void settransformation();
void ondisplay();
void settransformation() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-100, 100, -100, 100);
}

void ondisplay() {
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	settransformation();
#pragma region Triangles
	glBegin(GL_TRIANGLES);
	glColor3f(0.184, 0.310, 0.310);
	glVertex3f(0, 90, 0);
	glVertex3f(90, 40, 0);
	glVertex3f(-90, 40, 0);
	glEnd();
#pragma endregion

#pragma region HomeBody
	glBegin(GL_QUADS);
	glColor3f(0.824, 0.706, 0.549);
	glVertex3f(-90, 40, 0);
	glVertex3f(-90, -90, 0);
	glVertex3f(90, -90, 0);
	glVertex3f(90, 40, 0);
	glEnd();
#pragma endregion

#pragma region LeftWindow
	glBegin(GL_QUADS);
	glColor3f(0.184, 0.310, 0.310);
	glVertex3f(-60, 30, 0);
	glVertex3f(-30, 30, 0);
	glVertex3f(-30, 0, 0);
	glVertex3f(-60, 0, 0);
	glEnd();
#pragma endregion

#pragma region RightWindow
	glBegin(GL_QUADS);
	glColor3f(0.184, 0.310, 0.310);
	glVertex3f(30, 30, 0);
	glVertex3f(60, 30, 0);
	glVertex3f(60, 0, 0);
	glVertex3f(30, 0, 0);
	glEnd();
#pragma endregion

#pragma region Door
	glBegin(GL_QUADS);
	glColor3f(0.184, 0.310, 0.310);
	glVertex3f(-20, -30, 0);
	glVertex3f(20, -30, 0);
	glVertex3f(20, -90, 0);
	glVertex3f(-20, -90, 0);
	glEnd();
#pragma endregion
	glFlush();
}

void initgraphics(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutCreateWindow("Home-Task");
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(ondisplay);

	glutMainLoop();
}

#pragma region Main Method
int main(int argc, char* argv[]) {
	initgraphics(argc, argv);
	return 0;
}
#pragma endregion

#pragma endregion
 
 
 
 
 

 




