#pragma once

#include <GL\glew.h>     
#include <GL\freeglut.h>   
#include <GL\glut.h>
#include <GL\GLU.h>

void draw();

class Window
{
public:

	Window(int argc, char** argv);								//Contustor that sets up all OpneGL functionality

	static void reshape(int w, int h);							//Allows window to be resized
	static void keyboard(unsigned char key, int x, int y);		//Function defining the operation of key presses
	static void display();										//The display loop function 

private:

	Window() {};												//Default consturctor can not be called
};