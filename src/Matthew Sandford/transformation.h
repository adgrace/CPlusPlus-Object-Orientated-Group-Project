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

	Transformation() : Instruction(), data(0, 0, 0) {};											//Default constructor initialises base and sets defualt data
	Transformation(const Vector3<GLfloat> new_data) : Instruction(), data(new_data) {};			//Constructor that takes in arguments to set up data member variable

	~Transformation() {};																		//Default constructor

	void set_transformation_data(const Vector3<GLfloat> new_data) { data = new_data; };			//Mutator to change the data member variable

	Vector3<GLfloat> get_transformation_data() const { return data; };							//Accessor to get the data member variable

	friend std::istream& operator >> (std::istream& file, Transformation& trasnformation)		//Input operator overloaded to allow for easy file reading, its inlined to keep it in one file and for speed.
	{
		file >> trasnformation.data.x;															//Read x
		file >> trasnformation.data.y;															//Read y
		file >> trasnformation.data.z;															//Read z

		std::cout << trasnformation.data.x << " " << trasnformation.data.y << " " << trasnformation.data.z << "\n" << std::endl;

		return file;
	};

protected:

	Vector3<GLfloat> data;																		//Data member variable

private:

};