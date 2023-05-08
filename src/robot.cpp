#include <iostream>
using namespace std;

enum class Orientation {    
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
        this->x = x;
        this->y = y;
        this->orientation = orientation;
    }

    void turn_left() {
        orientation = static_cast<Orientation>(((static_cast<int>(orientation) +4)-1) % 4);
    }

    void turn_right() {
        orientation = static_cast<Orientation>((static_cast<int>(orientation) +1) % 4);
    }

    void forward(int steps) {
        switch (this->orientation) {
            case Orientation::NORTH:
                this ->y -= steps;
                break;
            case Orientation::EAST:
                this ->x += steps;
                break;
            case Orientation::SOUTH:
                this ->y += steps;
                break;
            case Orientation::WEST:
                this ->x -= steps;
                break;
        }
    }

    char get_orientation() {
        int value = static_cast<int>(this->orientation);
        switch (value) {
            case 0:
                return 'N';
            case 1:
                return 'E';
            case 2:
                return 'S';
            case 3:
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

    void printRoom(Robot robot) {
        for (int i = 0; i < length; i++) {
            for (int j = 0; j < width; j++) {
                if (robot.getX() == j && robot.getY() == i) {
                    cout << robot.get_orientation();
                } else {
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

    room.printRoom(robot);


    robot.turn_left();
    robot.forward(2);
    room.printRoom(robot);

    robot.turn_right();
    robot.forward(1);
    room.printRoom(robot);

    return 0;
}
