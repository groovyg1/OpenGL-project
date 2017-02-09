#include <GL/GLUT.h>

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);		// Clear Buffer to preset value, parameter is mask
	glFlush();				// force execution of GL commands in finite time
}


void Initialize() {
	glClearColor(1.0, 1.0, 1.0, 0.0);	// Have fun Changing the color of the windows
	glMatrixMode(GL_PROJECTION);		//* specify which matrix is the current matrix
	glLoadIdentity();			//* replace the current matrix with the identity matrix
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0); //* multiply the current matrix with an orthographic matrix
}

int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);			// Initialize GLUT Library
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	// Initialize Display and set display mode
	glutInitWindowSize(950, 500);			// Set Windows Size
	glutInitWindowPosition(200, 200);		// Set Windows Position
	glutCreateWindow("Hello World");		// Set Windows Title
	//Initialize();		
	glutDisplayFunc(Draw);				// Display Function takes function as argument - (sets the display callback for the current window.)
	glutMainLoop();					// Holds the Screen as long as the 'X' button is clicked
	return 0;
}


//* these have not been understood
