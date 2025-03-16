#include <iostream>

#include <string>

using namespace std;

class Date {
    private:
        string name;
    
};

class Person {
private:
    string name;
    int Bday;
    int Bmonth;
    int Byear;

public:
    Person(string name, int day, int month, int year)
        : name(name), Bday(day), Bmonth(month), Byear(year) {}

    void setBirthYear(int year) {
        Byear = year;
    }

    int getBirthYear() const {
        return Byear;
    }

    void setBirthMonth(int month) {
        Bmonth = month;
    }

    int getBirthMonth() const {
        return Bmonth;
    }

    void setBirthDay(int day) {
        Bday = day;
    }

    int getBirthDay() const {
        return Bday;
    }
};

