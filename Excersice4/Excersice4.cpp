#include <iostream>
#include <string>
using namespace std;

class Date {
public:
    int day, month, year;
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}
};

class Person {
public:
    string name;
    int age;
    Person(string n = "", int a = 0) : name(n), age(a) {}
};

class Student : public Person {
public:
    string major;
    Student(string n, int a, string m) : Person(n, a), major(m) {}
};

class Employee : public Person {
public:
    double salary;
    Employee(string n, int a, double s) : Person(n, a), salary(s) {}
};

class Manager : public Employee {
public:
    string department;
    Date appointmentDate;
    Manager(string n, int a, double s, Date d) 
        : Employee(n, a, s), appointmentDate(d) {}
};

void printTable(Manager* managers[], int n) {
    cout << "Name\tSalary\tAge\tAppointment Date\tDepartment\n";
    for (int i = 0; i < n; i++) {
        cout << managers[i]->name << "\t" << managers[i]->salary << "\t" 
             << managers[i]->age << "\t" << managers[i]->appointmentDate.day 
             << "/" << managers[i]->appointmentDate.month << "/" 
             << managers[i]->appointmentDate.year << "\t" 
             << managers[i]->department << endl;
    }
}

int main() {
    int N;
    cin >> N;
    if (N <= 2) return 1;

    Manager* managers[N];
    for (int i = 0; i < N; i++) {
        string name, dept;
        int age, day, month, year;
        double salary;
        cin >> name >> salary >> age >> day >> month >> year >> dept;
        managers[i] = new Manager(name, age, salary, Date(day, month, year));
        managers[i]->department = dept;
    }

    printTable(managers, N);

    managers[1]->appointmentDate.month = 7;
    managers[1]->appointmentDate.year = 2010;
    managers[2]->appointmentDate.month = 5;
    managers[2]->appointmentDate.year = 1992;

    printTable(managers, N);

    for (int i = 0; i < N; i++) {
        delete managers[i];
    }

    return 0;
}
