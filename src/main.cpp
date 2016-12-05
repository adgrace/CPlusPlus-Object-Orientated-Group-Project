#include "file2d.h"
#include "window.h"

//Global instance of File2d which is used to retrieve information from the input txt file
File2d file("sample1.txt");


//Function to draw the scene
void draw()
{
	//For each loop to iterate over the instuction retrieved from the txt file
	for (auto &object : file.get_instruction_vector())
	{
		//Call each objects draw function
		object->draw();
	}
}

int main(int argc, char** argv)
{
	//Create and run a window
	Window window(argc, argv);
}