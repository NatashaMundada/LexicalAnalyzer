#include <iostream>
#include <string>
#include "lexicalAnalysis.h"

using namespace std;

void getFileInput() {
    string filename;
    GenerateTokens gt;
   

    cin >> filename;
    int returnValue = gt.tokens(filename);

    if (returnValue == -1) {
        getFileInput();
    }
}

int main() {
    cout << "Enter the C file that you want to generate tokens for\n";
    cout << "(Provide the complete path or keep the file in the same directory).\n";
    getFileInput();
}