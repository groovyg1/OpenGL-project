#include <GL/GLUT.h>

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}


void Initialize() {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(950, 500);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Hello World");
	//Initialize();
	glutDisplayFunc(Draw);
	glutMainLoop();
	return 0;
}