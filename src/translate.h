#pragma once

#include "transformation.h"

class Translate : public Transformation
{
public:

	Translate() : Transformation() {};
	
	//Constructor to allow data to be passed in to the class
	Translate(const Vector3f<GLfloat> new_data) : Transformation(new_data) {};
	
	~Translate() {};
	
	//Overwriting the virtual draw function within "Instruction"
	void draw(void) { glTranslatef(data.x, data.y, data.z); };

protected:

private:

};