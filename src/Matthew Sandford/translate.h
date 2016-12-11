#pragma once

#include "transformation.h"

class Translate : public Transformation
{
public:

	Translate() : Transformation() {};											//Default Constructor that sets up the inherited class
	Translate(const Vector3<GLfloat> new_data) : Transformation(new_data) {};  	//Constructor to allow data to be passed in to the class

	~Translate() {};															//Default destructor

	void draw(void) { glTranslatef(data.x, data.y, data.z); };					//Overwriting the virtual draw function within "Instruction"

protected:

private:

};