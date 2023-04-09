#include <iostream>
#include <string>

using namespace std;

class GenerateTokens {
    public:
        int tokens(string filename);
        bool checkKeyword(string fileLine);
        bool in_array(const string &value, const vector<string> &array);
};
