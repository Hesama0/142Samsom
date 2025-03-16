#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string fname;
    string lname;
    int year_of_birth;
public:
//we can either use a third party function for setting values or a Constructor as I'm doing down here
    Person (string f, string l, int y) {
        fname = f;
        lname = l;
        year_of_birth = y;
    }

    void printNameStyle1 (){
        cout << "name: " << fname << " " << lname << endl;
    };
    void printNameStyle2 (){
        cout << "name: " << lname << " " << fname << endl;
    };
    int getAge(){
        return 2025 - year_of_birth;
    };
};


int main () {
Person p1("Mohammed", "hamid", 2002);
Person p2("Ahmed", "Najm", 1999);

//person1
p1.printNameStyle1();
p1.printNameStyle2();
cout << p1.getAge() << endl;

//person 2
p2.printNameStyle1();
p2.printNameStyle2();
cout << p2.getAge() << endl;

    return 0;
}