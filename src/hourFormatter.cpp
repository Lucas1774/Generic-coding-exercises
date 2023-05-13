#include <iostream>

using namespace std;

class Converter {
    private:
        int s;
        int m;
        int h;
    public:
        void setTime(int seconds) {
            this -> s = seconds;
            this -> m = this -> s / 60;
            this -> s = this -> s % 60;
            this -> h = this -> m / 60;
            this -> m = this -> m % 60;
        }
        
        void display() {
            cout << "The time is = ";
            if (h < 10) { cout << "0";}
            cout << h << ":";
            if (m < 10) { cout << "0";}
            cout << m << ":";
            if (s < 10) { cout << "0";}
            cout << s << endl;
        }
};

int main() {
    Converter c;
    int seconds;

    cout << "Enter time in seconds: ";
    cin >> seconds;
    c.setTime(seconds);
    c.display();
    return 0;
}
