#include <iostream>
#include <vector>

using namespace std;

enum Orientation {    
    NORTH,
    EAST,
    SOUTH,
    WEST
};

class Robot {
private:
    int x;
    int y;
    Orientation orientation;
public:
    Robot(int x, int y, Orientation orientation) {
        this -> x = x;
        this -> y = y;
        this -> orientation = orientation;
    }

    void turn_left() {
        this -> orientation = static_cast<Orientation>((static_cast<int>(orientation) +3) % 4);
    }

    void turn_right() {
        this -> orientation = static_cast<Orientation>((static_cast<int>(orientation) +1) % 4);
    }

    void forward(int steps) {
        switch (this -> orientation) {
            case NORTH:
                this -> y -= steps;
                break;
            case EAST:
                this -> x += steps;
                break;
            case SOUTH:
                this -> y += steps;
                break;
            case WEST:
                this -> x -= steps;
                break;
        }
    }

    char get_orientation() {
        switch (this -> orientation) {
            case NORTH:
                return 'N';
            case EAST:
                return 'E';
            case SOUTH:
                return 'S';
            case WEST:
                return 'W';            
            default:
                return '?';
        }
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }
};


class Room {
private:
    int width;
    int length;
public:
    Room(int w, int l) {
        this -> width = w;
        this -> length = l;
    }

    void printRoom(vector <Robot> robots) {
        for (int i = 0; i < this -> length; i++) {
            for (int j = 0; j < this -> width; j++) {
                for (Robot robot: robots){
                    if (robot.getX() == j && robot.getY() == i) {
                        cout << robot.get_orientation();
                        break;
                    } 
                    cout << "-";
                }
            }
            cout << endl;
        }
    }
};


int main() {
    Room room(5, 5);
    Robot robot(2, 2, Orientation::NORTH);
    vector <Robot> robots;
    robots.push_back(robot);
    room.printRoom(robots);
    cout << endl;

    robots[0].turn_left();
    robots[0].forward(2);
    room.printRoom(robots);
    cout << endl;

    robots[0].turn_right();
    robots[0].forward(1);
    room.printRoom(robots);

    return 0;
}
