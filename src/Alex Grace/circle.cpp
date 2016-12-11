#include "circle.h"
#include <math.h>

//Functions explained in header file

Circle(double new_radius, int new_segments, Vector3<GLfloat> new_colour)
{
	set_radius(new_radius);													// sets radius of the circle
	set_segments(new_segments);												// sets number of segments of the circle
	set_colour(new_colour);													// sets colour of the circle
	calculate_verts();														// calls the function to calculate and then add the circles vertices to the polygon vector
};


void calculate_verts()
{
	int section = 360/segments;												// calcualtes degrees of each segment
	GLfloat x=0.0f, y=0.0f;													// initalises x and y as floats

	for (int degrees = 0; degrees < 360; i+=section ){						// for loop incrementing from zero degrees to less than 360 degrees
		x = radius * Math.sin(degrees * Math.PI / 180);						// calculate x coordinate
		y = radius * Math.cos(degrees * Math.PI / 180);						// calculate y coordinate
		add_vertex(Vector3(x,y,0.0f));										// add vertex to object vector
	}
};

friend std::istream& operator >> (std::istream& file, Circle& circle)		// modifying the input stream operator for a circle
{


	return file;
};