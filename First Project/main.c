
#include<windows.h>
#include<GL\glut.h>
#include<GL\gl.h>

void linesegment (void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	 glVertex2i(180,15);
	 glVertex2i(10,145);
   	 glEnd();
	glFlush();

}



void init (void)
{
	glClearColor(1.0,1.0,1.0,0.0); //specifies clear 	values for the color buffers (R,G,B,Alpha)
	glMatrixMode(GL_PROJECTION); // sets the 	current matrix mode
	gluOrtho2D(0.0,200.0,0.0,150.0); //2D orthographic 	projection matrix (left,right,bottom,top)
}
int main (int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //sets 	the initial display mode
	glutInitWindowPosition(50,100); //sets the initial window 	position
    	glutInitWindowSize(400,300); //sets the initial window size
    	glutCreateWindow("Line"); // creates the window with name line
	init();
	glutDisplayFunc(linesegment); //sets the display callback for 	the current window.
	glutMainLoop(); // enters the GLUT event processing loop
return 0;
}
