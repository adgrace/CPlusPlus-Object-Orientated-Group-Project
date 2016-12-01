#pragma once

#include "transformation.h"

class Translate : public Transformation
{
public:

	Translate() : Transformation() {};
	Translate(const Vector3f<GLfloat> new_data) : Transformation(new_data) {};
	~Translate() {};

	void draw(void) { glTranslatef(data.x, data.y, data.z); };

protected:

private:

};