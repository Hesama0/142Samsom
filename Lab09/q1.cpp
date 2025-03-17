//Mohammed Osama Bibi
//2231173006
//Lab09

#include <iostream>
#include <cmath>
using namespace std;

class Point {
friend class Line;
private:
    float* x;
    float* y;
public:
    Point(float _x, float _y) {
        x = new float(_x);
        y = new float(_y);
    }
    Point(const Point& other) {
        x = new float(*other.x);
        y = new float(*other.y);
    }
    ~Point() {
        delete x;
        delete y;
    }
    void print() const {
        cout << "( " << *x << " , " << *y << " )" << endl;
    }
    float getX() const { return *x; }
    float getY() const { return *y; }
};

class Line {
private:
    Point p1;
    Point p2;
public:
    Line(Point& _p1, Point& _p2) : p1(_p1), p2(_p2) {}

    float computeSlope() const {
        float deltaX = p2.getX() - p1.getX();
        float deltaY = p2.getY() - p1.getY();
        if (deltaX == 0) return NAN;
        return deltaY / deltaX;
    }
};

int main() {
    Point p1(2.0, 3.0);
    Point p2(5.0, 7.0);

    p1.print();
    p2.print();

    Line line(p1, p2);
    cout << line.computeSlope() << endl;
    return 0;
}