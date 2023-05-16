#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const int MAX = 6;
int count = 0;

bool isNotBouncy(string n) {
    bool ascending = true;
    for (int i = 0; i < n.length() - 1; i++) {
        if (n[i] > n[i + 1]) {
            ascending = false;
            break;
        }
    }
    bool descending = true;
    for (int i = 0; i < n.length() - 1; i++) {
        if (n[i] < n[i + 1]) {
            descending = false;
            break;
        }
    }
    return (ascending || descending);
}

void run(string n) {
    if (isNotBouncy(n)) {
        count++;
        if (n.length() < MAX) {
            for (int i = 0; i < 10; i++) {
                run(n + to_string(i));
            }
        }
    }
}

int main() {
    for (int i = 1; i < 10; i++) {
        run(to_string(i));
    }
    cout << "Number of numbers that are bouncy under " << pow(10, MAX) << " digits: " << count << endl;
    return 0;
}
