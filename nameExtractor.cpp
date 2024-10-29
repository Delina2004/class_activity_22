#include "nameExtractor.hpp"

using namespace std;  

vector<string> extractNames(const string& fullName) {
    vector<string> nameParts;
    string part;
    int startPos = 0;

    for (int i = 0; i <= fullName.length(); i++) {
        if (i == fullName.length() || fullName[i] == ' ') {
            part = fullName.substr(startPos, i - startPos);  
            nameParts.push_back(part);  
            startPos = i + 1;  
        }
    }

    return nameParts; 
}
