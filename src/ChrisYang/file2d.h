#include <iostream>
#include <fstream>
#include <string>
#include "translate.h"
#include "scale.h"
#include "circle.h"
#include "polygon.h"
#include "vector3f.h"
#include "instruction.h"

class BadFileException{};

using namespace std;
class File2d {
private:
    File2d(){};
    string selected_file;
    string StringToUpper(string strToConvert);
    vector<Instruction*> instruction_vector;

public:
    File2d(string fileName);
    void createInstructionVector();
    vector getInstructionVector();
    ~File2d();
};