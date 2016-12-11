#include "polygon.h"

//Functions explained in header file

void draw(void)
{
	glColor3f(colour.x, colour.y, colour.z);	//set colour
	glBegin(GL_LINE_LOOP);						//start line 
	for (Vector3<GLfloat> &vert : verts) 		// for each member of verts loop, access by reference to avoid copying
    {  
        glVertex3f(vert.x, vert.y, vert.z);		//draw each vertex
    }
    glEnd();									//end line
};

friend std::istream& operator >> (std::istream& file, Polygon& polygon)	// modifying the input stream operator for a polygon
{
	

	return file;
};