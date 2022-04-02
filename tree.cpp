
#include <windows.h>
#include <GL/glut.h>


void initGL() {

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);


///TREE01///
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2f(0.91f, -0.1f);
    glVertex2f(0.91f, -0.7f);
    glVertex2f(0.94f, -0.7f);
    glVertex2f(0.94f, -0.1f);
    glEnd();
///LEAF01///
    glBegin(GL_POLYGON);
    glColor3ub(204, 204, 0 );
    glVertex2f(0.80f, -0.1f);
    glVertex2f(1.05f, -0.1f);
    glVertex2f(0.925f, 0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(204, 204, 0 );
    glVertex2f(0.85f, 0.1f);
    glVertex2f(1.00f, 0.1f);
    glVertex2f(0.925f, 0.4f);
    glEnd();


	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Vertex, Primitive & Color");
	glutInitWindowSize(320, 320);
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(display);
	initGL();
	glutMainLoop();
	return 0;
}
