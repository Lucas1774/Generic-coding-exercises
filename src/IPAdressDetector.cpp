#include <iostream>
#include <string>
#include <regex>
#include <list>

using namespace std;

bool isValid(string s) {
    regex valid_address("([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])(\\.([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])){3}");
    bool temp = regex_match(s, valid_address);
    return temp;
}


int main (int argc, char* argv[]) {
    if (argc !=2) {
        cout << "program doesn't match search <string>" << endl;
        return 1; 
    }
    string input = argv[1];
    if (input.size() < 7) {
        return 1;
    }
    for (int i = 0; i < input.size(); ++i) {
        for (int j = 7 ; j <= 16 && i + j <= input.length(); ++j) {
            string substr = input.substr(i, + j);
            if ( isValid(substr)) {
                cout << substr << endl;
                i += j - 1;
                break;
            }
        }
    }
    return 0;
}
