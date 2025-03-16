//Mohammed Osama Mohammed 
//2231173006
//Lab07
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Circle {
private:
    double *radius;
    
public:
//Default Constructor
    Circle () {
        radius = new double (10);
    }
//Parameterized Constructor
    Circle (double _radius) {
        if (_radius > 0.0)
            radius = new double (_radius);
        else
            radius = new double (10);
    }
//Setter 
    void setRadius (const double _radius) {
        *radius = _radius;
    }
//Getter
    double getRadius() const {
        return *radius;
    }
//Function computeArea
    double computeArea() const {
        return 3.14 * pow(*radius, 2);
    }
//Note for *DrSulaiman*  "If the radii are the same then the circle area is the same"
    bool equal(const Circle &s) const {
        return *radius == *(s.radius);
    }
//Destructor
    ~Circle() {
        delete radius;
    }
};

int main() {
    Circle c1;
    Circle c2(-5);
    Circle c3(7);

    c3.equal(c2);

    cout << "Area of c3: " << c3.computeArea() << endl;
    c3.setRadius(90);
    c3.getRadius();

    return 0;
}
