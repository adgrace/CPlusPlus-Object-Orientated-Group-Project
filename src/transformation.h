#pragma once

#include <GL\glew.h>     
#include <GL\freeglut.h>   
#include <GL\glut.h>
#include <GL\GLU.h>

#include "instruction.h"
#include "vector3.h"

class Transformation : public Instruction
{
public:
	Transformation() : Instruction(), data(0,0,0) {};
	Transformation(const Vector3<GLfloat> new_data) : Instruction(), data(new_data) {};
	~Transformation() {};

	void set_transformation_data(const Vector3<GLfloat> new_data) { data = new_data; };
	Vector3<GLfloat> get_transformation_data() const { return data; };

	friend std::istream& operator >> (std::istream& file, Transformation& trasnformation)
	{
		file >> trasnformation.data.x;
		file >> trasnformation.data.y;
		file >> trasnformation.data.z;

		std::cout << trasnformation.data.x << " " << trasnformation.data.y << " " << trasnformation.data.z << "\n" << std::endl;

		return file;
	};

protected:

	Vector3<GLfloat> data;

private:

};