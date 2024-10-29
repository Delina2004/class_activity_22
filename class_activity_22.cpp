#include <iostream>
#include "nameExtractor.hpp"  

using namespace std;  

int main() {
    string fullName;
    cout << "Enter full name: ";
    getline(cin, fullName);  


    vector<string> nameParts = extractNames(fullName);

    string firstName = nameParts[0];
    string lastName = nameParts[nameParts.size() - 1];

    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;

    return 0;
}
