#include "file2d.h"
#include "window.h"

File2d file("sample1.txt");

void draw()
{
	for (auto &object : file.get_instruction_vector())
	{
		object->draw();
	}
}

int main(int argc, char** argv)
{
	Window window(argc, argv);
}