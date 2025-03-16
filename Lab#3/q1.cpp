#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    double gpa;
    bool has_fail;
public:
   
    Student (string _name, double _gpa) {
        name = _name;
        gpa = _gpa;
        has_fail = false;
        if (gpa > 4 || gpa < 0) {
            gpa = 0;
        }
    }

    
    Student (string _name, double _gpa, bool _has_fail) {
        name = _name;
        gpa = _gpa;
        has_fail = _has_fail;
    }

    
    void printStatus () {
        if (gpa >= 3.0 && has_fail == false) {
            if (gpa >= 3.75) {
                cout << "First honor";
            }
            else if (gpa >= 3.25 && gpa < 3.75) {
                cout << "Second honor";
            }
            else if (gpa >= 3.0 && gpa < 3.25) {
                cout << "Third honor";
            }
        }
        else if (gpa >= 2.0) {
            cout << "Good Standing";
        }
        else if (gpa < 2.0 && gpa >= 1.0) {
            cout << "Academic Warning";
        }
        else if (gpa < 1.0) {
            cout << "Academic Probation";
        }
    }
};

int main() {
    Student student1("Hosam", 3.8);
    Student student2("Mahmoud", 2.5);
    Student student3("Ahmed", 1.5, true);
    Student student4("Salem", 4, false);

    student1.printStatus();
    cout << endl;
    student2.printStatus();
    cout << endl;
    student3.printStatus();
    cout << endl;
    student4.printStatus();
    cout << endl;

    
    return 0;
}
