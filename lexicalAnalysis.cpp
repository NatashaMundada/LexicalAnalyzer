#include "lexicalAnalysis.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

//List of keywords in C language.
string keywords[] = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", 
"extern", "float", "for", "goto", "if", "int", "long", "register", "return", "short", "signed", "sizeof", "static", 
"struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"};

const vector<string> vecKeyword (keywords, keywords + sizeof(keywords) / sizeof(keywords[0]));

string delimeters[] = {";", "(", ")", "[", "]", "{", "}", ":"};

const vector<string> vecDelimeters (delimeters, delimeters + sizeof(delimeters) / sizeof(delimeters[0]));

int GenerateTokens :: tokens(string filename) {
    string fileCharacter;
    int fileLength = filename.length();
    string fileLine;
    vector<string> delimeterInSource;


    string endsWith = filename.substr(filename.length() - 2, 2);
    if(endsWith != ".c") {
        cout << "Provide a C source file\n";
        return -1;
    }
    ifstream infile(filename);
    while(!infile.eof()) {
        fileCharacter = infile.get();
        int n = delimeters->length() + sizeof(*delimeters);

        if (find(delimeters, delimeters + n, fileCharacter) != delimeters + n) {
            if (find(delimeterInSource.begin(), delimeterInSource.end(),fileCharacter) == delimeterInSource.end()) {
                delimeterInSource.push_back(fileCharacter);
            }
            fileCharacter = "";
        }
    }

    for(int i = 0; i < delimeterInSource.size(); i++) {
        cout << delimeterInSource[i] << " ";
    }
}


bool GenerateTokens :: checkKeyword(string fileLine) {

}