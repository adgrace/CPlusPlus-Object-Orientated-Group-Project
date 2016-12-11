#pragma once

#include "transformation.h"

class Scale : public Transformation
{
public:

	Scale() : Transformation() {};												//Default Constructor that sets up the inherited class
	Scale(const Vector3<GLfloat> new_data) : Transformation(new_data) {}; 		//Constructor to allow data to be passed in to the class

	~Scale() {};																//Default destructor 

	void draw(void) { glScalef(data.x, data.y, data.z); };						//Overwriting the virtual draw function within "Instruction" to call GlScale function

protected:

private:

};