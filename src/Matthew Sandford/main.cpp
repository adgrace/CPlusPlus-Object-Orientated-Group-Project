#include "instruction.h"
#include "file2d.h"
#include "window.h"

//Global vector of instances to be drawn
std::vector<Instruction*> instrucions;

//Function to draw the scene
void draw()
{
	//For each loop to iterate over the instuction retrieved from the txt file
	for (auto &object : instrucions)
	{
		//Call each objects draw function
		object->draw();
	}
}

int main(int argc, char** argv)
{
	//File2d instance which will read and create an instruction vector
	File2d file("sample1.txt");
	file.get_instruction_vector();
	
	//Create and run a window
	Window window(argc, argv);
}