#pragma once

#include <GL\glew.h>     
#include <GL\freeglut.h>   
#include <GL\glut.h>
#include <GL\GLU.h>

void draw();

class Window 
{
public:

	//Contustor that sets up all OpneGL functionality
	Window(int argc, char** argv);

	//Allows window to be resized
	static void reshape(int w, int h);
	
	//Function defining the operation of key presses
	static void keyboard(unsigned char key, int x, int y);
	
	//The display loop function 
	static void display();

private:

	//Default consturctor can not be called
	Window(){};
};