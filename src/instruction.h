#pragma once

//Bass class that will allow transformations and polygons to be stored in one container class

class Instruction 
{
public:

	Instruction() {};
	~Instruction() {};

	//Virutal function that will be used by transformations and polygons
	virtual void draw(void) = 0; 

protected:

private:

};