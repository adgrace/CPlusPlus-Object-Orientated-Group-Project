#include <iostream>
#include <fstream>
#include <string>
#include "translate.h"
#include "scale.h"
#include "circle.h"
#include "polygon.h"

class BadFileException{};

using namespace std;
class File2d {
private:
    File2d(){};
    string selected_file;
public:
    File2d(string fileName);
    void createInstructionVector();
    virtual ~File2d();
    string StringToUpper(string strToConvert);
};