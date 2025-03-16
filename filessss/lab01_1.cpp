#include <iostream>

using namespace std;

class Square {
public:
    double side;
    double computePerimeter() {
        return 4 * side;
    }
};

int main() {
    Square square1;
    square1.side = 5.0;
    cout << "Square 1 Perimeter: " << square1.computePerimeter() << endl;

    Square square2;
    square2.side = 7.5;
    cout << "Square 2 Perimeter: " << square2.computePerimeter() << endl;

    return 0;
}
