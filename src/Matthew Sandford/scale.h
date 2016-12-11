#pragma once

#include "transformation.h"

class Scale : public Transformation
{
public:

	Scale() : Transformation() {};
	
	//Constructor to allow data to be passed in to the class
	Scale(const Vector3f<GLfloat> new_data) : Transformation(new_data) {};
	
	~Scale() {};

	//Overwriting the virtual draw function within "Instruction"
	void draw(void) { glScalef(data.x, data.y, data.z); };

protected:

private:

};