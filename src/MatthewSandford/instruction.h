#pragma once

#include <iostream> //ADDED

#include <GL\glew.h>     
#include <GL\freeglut.h>   
#include <GL\glut.h>
#include <GL\GLU.h>

//Bass class that will allow transformations and polygons to be stored in one container class

class Instruction
{
public:

	Instruction() {};						//Default constructor
	~Instruction() {};						//Default destructor

	virtual void draw(void) = 0;			//Virutal function that will be used by transformations and polygons

protected:

private:

};