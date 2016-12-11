#include "file2d.h"

int main(int argc, char**argv){
    try{
        if(argc!=2){
            cerr << "Incorrect number of argument.\nPlease try again!!!" << endl;
        }
        else{
            File2d Assignment(argv[1]);
            Assignment.createInstructionVector();
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