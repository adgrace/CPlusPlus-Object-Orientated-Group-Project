#include "instruction.h"
#include "file2d.h"
#include "window.h"

std::vector<Instruction*> instrucions;				//Global vector of instances to be drawn

void draw()											//Function to draw the scene
{

	for (auto &object : instrucions)				//For each loop to iterate over the instuction retrieved from the txt file
	{
		object->draw();								//Call each objects draw function
	}
}

int main(int argc, char** argv)
{
	File2d file("instructions.txt");				//File2d instance which will read and create an instruction vector
	instrucions = file.getInstructionVector();		//CHANGE

	Window window(argc, argv);						//Create and run a window
}