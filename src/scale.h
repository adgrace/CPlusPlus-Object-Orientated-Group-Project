#pragma once

#include "transformation.h"

class Scale : public Transformation
{
public:

	Scale() : Transformation() {};
	Scale(const Vector3f<GLfloat> new_data) : Transformation(new_data) {};
	~Scale() {};

	void draw(void) { glScalef(data.x, data.y, data.z); };

protected:

private:

};