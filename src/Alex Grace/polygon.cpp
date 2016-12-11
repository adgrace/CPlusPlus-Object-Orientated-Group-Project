#include "polygon.h"

//Functions explained in header file

void set_colour(const Vector3<GLfloat> new_colour)
{
	Vector3<GLfloat> temp;													// declares a tempary variable to hold the checked colour values
	if ((new_colour.x >= 0) && (new_colour.x <= 1)) {						// checks if x value is within acceptable range
		temp.x = new_colour.x;												// sets temp value with correct x
	} else {
		temp.x = 0;															// Error : sets temp x value with 0
		throw std::runtime_error("Colour value x is invalid(%f), must be between 0 and 1. Value has been set to 0", new_colour.x); // Error : Message
	}
	if ((new_colour.y >= 0) && (new_colour.y <= 1)) {						// checks if y value is within acceptable range
		temp.y = new_colour.y;												// sets temp value with correct y
	} else {
		temp.y = 0;															// Error : sets temp y value with 0
		throw std::runtime_error("Colour value y is invalid(%f), must be between 0 and 1. Value has been set to 0", new_colour.y); // Error : Message
	}
	if ((new_colour.z >= 0) && (new_colour.z <= 1)) {						// checks if z value is within acceptable range
		temp.z = new_colour.z;												// sets temp value with correct z
	} else {
		temp.z = 0;															// Error : sets temp z value with 0
		throw std::runtime_error("Colour value z is invalid(%f), must be between 0 and 1. Value has been set to 0", new_colour.z); // Error : Message
	}
};

void draw(void)
{
	glColor3f(colour.x, colour.y, colour.z);								//set colour
	glBegin(GL_LINE_LOOP);													//start line 
	for (Vector3<GLfloat> &vert : verts) 									// for each member of verts loop, access by reference to avoid copying
    {  
        glVertex3f(vert.x, vert.y, vert.z);									//draw each vertex
    }
    glEnd();																//end line
};

friend std::istream& operator >> (std::istream& file, Polygon& polygon)		// modifying the input stream operator for a polygon
{
	string description;
	int num_of_verts;
	Vector3<GLfloat> temp_vector;
	
	file >> description;
	if (description == "colour")
	{
		file >> polygon.colour.x;
		file >> polygon.colour.y;
		file >> polygon.colour.z;
	}

	file >> description;
	if (description == "num_vert")
	{
		file >> num_of_verts;
	}

	for (int i =0; i < num_of_verts; i++ {
		file >> temp_vector.x;
		file >> temp_vector.y;
		file >> temp_vector.z;
		add_vertex(temp_vector);
	}


	return file;
};