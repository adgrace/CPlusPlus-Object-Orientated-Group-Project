#include "file2d.h"


File2d::File2d(string fileName){
    vector<Instruction*> instruction_vector;
    selected_file = fileName;
}

File2d::~File2d() {
    delete [] instruction_vector;
}


// Modify the input string and output the correponding string in upper case.
string File2d::StringToUpper(string strToConvert) {
    transform(strToConvert.begin(), strToConvert.end(), strToConvert.begin(), ::toupper);
    return strToConvert;
}

void File2d::createInstructionVector() {
    // Throw exception if the file cannot be open.
    try{
        ifstream openFile(selected_file.c_str());    
    }catch(BadFileException& ex){
        cerr<<"Unable to open file!"<<endl;
    }
    
    // if(!openFile.is_open()) 
    //     throw BadFileException();

    // If the file is open, loop around the file to search for the words: translate, scale, circle, polygon.
    cout<<"Reading file: "<<selected_file<<endl;
    string line;
    while(getline(openFile, line)){
        try{
            int strpos = line.find(" ");
            string first_word = line.substr(0, strpos);
            first_word = StringToUpper(first_word);

            // Create new instance for corresponding keywords.
            if(first_word == "TRANSLATE"){
                Translate* next_translation = new Translate;
                openFile>>*next_translation;
                instruction_vector.push_back(next_translation); 
            }

            else if(first_word == "SCALE"){
                Scale* next_scale = new Scale;
                openFile>>*next_scale;
                instruction_vector.push_back(next_scale);    
            }

            else if(first_word == "CIRCLE"){
                Circle* next_circle = new Circle;
                openFile>>*next_circle;
                instruction_vector.push_back(next_circle);    
            }

            else if(first_word == "POLYGON"){
                Polygon* next_polygon = new Polygon;
                openFile>>*next_polygon;
                instruction_vector.push_back(next_polygon);    
            }
        }
        // Catch runtime exception and any other unexception exception
        catch(const runtime_error& error){
            cerr<<"Runtime exception: "<<error.what()<< endl;
        }
        catch(...){
            cerr<<"Encouter exception"<<endl;
        }
    }
    openFile.close();
}

vector<Instruction*> File2d::getInstructionVector(){
    return instruction_vector;
}