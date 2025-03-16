#include <iostream>

using namespace std;
class Date{
    int day,month, year;
    public:
    Date(int x, int y, int z){
        day=x; month=y; year =z;
    }
    Date(): day(0), month(0), year(0) {}
    void setall(int x,int y, int z){
        day=x; month=y; year =z;

    }
    void setBirthyear(int i){
        year=i;
    }
    int getBirthyear(){
        return year;
    }
    void setBirthmonth(int i){
        month =i;
    }
    int getBirthmonth(){
        return month;
    }
    void setBirthday(int i){
        day =i;
    }
    int getBirthday(){
        return day;
    }
};

class Person{
    private:
        string name;
        int id;
        Date birthday;
    public:
    Person(string x, int day, int month, int year) :
    name(x), birthday(day,month,year)
    { } 
       
    void  setName(string n){
            name=n;
        }
    string getName(){
        return name;
    }
    void setBirthyear(int i){
        birthday.setBirthyear(i);
    }
    int getBirthyear(){
        return birthday.getBirthyear();
    }
    void setBirthmonth(int i){
        birthday.setBirthmonth(i);
    }
    int getBirthmonth(){
        return birthday.getBirthmonth();
    }
    void setBirthday(int i){
        birthday.setBirthday(i);
    }
    int getBirthday(){
        return birthday.getBirthday();
    }
};

int main(){

    return 0;
}