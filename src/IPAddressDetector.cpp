#include <iostream>
#include <string>
#include <regex>

using namespace std;

bool isValid(string s) {
    const regex VALID_ADDRESS("([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])(\\.([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])){3}");
    return regex_match(s, VALID_ADDRESS);
}


int main (int argc, char* argv[]) {
    if (argc != 2) {
        cout << "program call doesn't match expected format .\\IPAddressDetector.exe <string>" << endl;
        return 1; 
    }
    string input = argv[1];
    if (input.size() < 7) {
        return 0;
    }
    string substr;
    for (int i = 0; i < input.size(); i++) {
        for (int j = 7 ; j < 15 && i + j <= input.length(); j++) {
            substr = input.substr(i, j);
            if ( isValid(substr)) {
                cout << substr << endl;
                i += j - 1;
                break;
            }
        }
    }
    return 0;
}
