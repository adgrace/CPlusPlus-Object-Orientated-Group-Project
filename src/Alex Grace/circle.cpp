#include "circle.h"
#include <math.h>

//Functions explained in header file


void set_radius(const double new_radius)
{
	if (new_radius > 0) {													// checks if new_radius is a valid value
		radius = new_radius;												// sets the radius
	} else {
		throw std::runtime_error("Invalid radius value entered(%d), radius must be greater than 0", new_radius); // Error : Invalid radius
	}
};

void set_segments(const int new_segments)
{
	if (new_segments >= 2) {												// checks if new_segments is a valid value
		segments = new_segments;											// sets the number of segments
	} else {
		throw std::runtime_error("Invalid segments value entered(%d), there must be 2 or more segments", new_segments); // Error : Invalid number of segments
	}
};


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

	for (int degrees = 0; degrees < 360; degrees+=section ){				// for loop incrementing from zero degrees to less than 360 degrees
		x = radius * Math.sin(degrees * Math.PI / 180);						// calculate x coordinate
		y = radius * Math.cos(degrees * Math.PI / 180);						// calculate y coordinate
		add_vertex(Vector3(x,y,0.0f));										// add vertex to object vector
	}
};

friend std::istream& operator >> (std::istream& file, Circle& circle)		// modifying the input stream operator for a circle
{


	return file;
};