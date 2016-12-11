#pragma once

#include <GL\glew.h>     
#include <GL\freeglut.h>   
#include <GL\glut.h>
#include <GL\GLU.h>

#include "instruction.h"
#include "vector3.h"

//Transformation class that will be inhertied by scale and transform classes
class Transformation : public Instruction
{
public:

	//Default constructor initialises base and sets defualt data
	Transformation() : Instruction(), data(0,0,0) {};
	
	//Constructor that takes in arguments to set up data member variable
	Transformation(const Vector3<GLfloat> new_data) : Instruction(), data(new_data) {};
	
	~Transformation() {};

	//Mutator to change the data member variable
	void set_transformation_data(const Vector3<GLfloat> new_data) { data = new_data; };
	
	//Accessor to get the data member variable
	Vector3<GLfloat> get_transformation_data() const { return data; };

	//Input operator overloaded to allow for easy file reading
	friend std::istream& operator >> (std::istream& file, Transformation& trasnformation)
	{
		file >> trasnformation.data.x;
		file >> trasnformation.data.y;
		file >> trasnformation.data.z;

		std::cout << trasnformation.data.x << " " << trasnformation.data.y << " " << trasnformation.data.z << "\n" << std::endl;

		return file;
	};

protected:

	//Data member variable
	Vector3<GLfloat> data;

private:

};