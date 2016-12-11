#include "file2d.h"


File2d::File2d(string fileName){
    selected_file = fileName;
}

File2d::~File2d() {}

string File2d::StringToUpper(string strToConvert) {
    transform(strToConvert.begin(), strToConvert.end(), strToConvert.begin(), ::toupper);
    return strToConvert;
}

void File2d::createInstructionVector() {

    ifstream openFile(selected_file.c_str());
    cout<<selected_file<<endl;
    if(!openFile.is_open()) throw BadFileException();

    cout<<"Reading file: "<<selected_file<<endl;
    string line;
    while(getline(openFile, line)){
        int strpos = line.find(" ");
        string first_word = line.substr(0, strpos);
        first_word = StringToUpper(first_word);
        cout<<line<<endl;


        if(first_word == "TRANSLATE"){
            openFile>>translate;

        }
        else if(first_word == "SCALE"){
            openFile>>scale;
            
        }
        else if(first_word == "CIRCLE"){
            cout<<"find CIRCLE at line "<<endl;
            getline(openFile, line);
            openFile>>circle;
        }
        else if(first_word == "POLYGON"){
            cout<<"find POLYGON at line "<<endl;
            openFile>>polygon;
        }
    }
    openFile.close();
}
