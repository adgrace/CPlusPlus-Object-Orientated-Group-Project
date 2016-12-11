#include "instruction.h"
#include "file2d.h"
#include "window.h"

//Global vector of instances to be drawn
std::vector<Instruction*> instrucions;

int main(int argc, char**argv){
    try{
        // Check whether there are 2 command line arguments
        // Throw error if the arguments are not 2.
        if(argc!=2){
            cerr << "Incorrect number of argument.\nPlease try again!!!" << endl;
        }
        else{
            // Call the File2d class to read the text file
            File2d Assignment(argv[1]);
            Assignment.createInstructionVector();

            //Create and run a window
            Window window(argc, argv);
        }
    }
    catch(BadFileException& e)
    {
        cerr<<"Unable to open file!"<<endl;
    }
    catch(const runtime_error& error)
    {
        cerr<<"Runtime exception"<<endl;
    }
}

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