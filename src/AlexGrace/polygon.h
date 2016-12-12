#pragma once

#include "instruction.h"
#include "vector3.h"

// Class for Polygon shape

class Polygon : public Instruction {														// create Polygon class inheriting from Instruction
	public:
		Polygon() : Instruction(), colour(0.0f,0.0f,0.0f) {};								// Default Polygon constructor instantiating Instruction and default colour
		~Polygon() {};																		// Polygon destructor

		void set_colour(const Vector3<GLfloat> new_colour);									// Setter: set colour of shapes line
		void add_vertex(const Vector3<GLfloat> new_data) { verts.push_back(new_data); };	// Setter: adds vertexs to the vector that contains the vertexes

		Vector3<GLfloat> get_colour() {return colour; };									// Getter: returns the colour
		std::vector<Vector3<GLfloat>> get_verts() {return verts; };							// Getter: returns the full vector containing all the vertices

		void draw(void);																	// Function called to draw the Polygon

		friend std::istream& operator >> (std::istream& file, Polygon& polygon);			// Polygon Input Stream Operator

	protected:
		Vector3<GLfloat> colour;															// Colour of the line
		std::vector<Vector3<GLfloat>> verts;												// Vector containing all the vertices of the shape

	private:
};