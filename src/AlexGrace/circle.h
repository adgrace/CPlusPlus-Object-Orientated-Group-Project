#pragma once

#include "polygon.h"

//Class for Circle shape inheriting from the Polygon Class

class Circle : public Polygon {														// create Circle class inheriting from Polygon
	public:
		Circle() : Polygon() {};													// Default initaliser, calling default Polygon
		Circle(double new_radius, int new_segments, Vector3<GLfloat> new_colour);	// Circle constructor with arguments for radius, segments, colour
		~Circle() {};																// Destructor of cicle

		void set_radius(const double new_radius);									// Setter: sets the radius of circle
		void set_segments(const int new_segments);									// Setter: sets the number of segments of circle

		double get_radius() { return radius };										// Getter: returns radius of circle
		int get_segments() { return segments };										// Getter: returns number of segments of circle

		void calculate_verts();														// Calculate the vertices and add them to the polygon

		friend std::istream& operator >> (std::istream& file, Circle& circle);		// Circle Input Stream Operator

	protected:

	private:
		double radius;																// Radius of the circle
		int segments;																// Number of segments of the circle
};