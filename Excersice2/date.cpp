#include "Date.h"

 Date::Date(int x, int y ,int z){
   if(x<0 || x>31 ||y<0|| y>12 || z<0){
      day =1;
      month=1;
      year=2000;
   }else{
      day=x;
      month=y;
      year=z;
   }
   


 }

 bool Date::equal (const Date &other){
   return (day==other.day && month==other.month && year==other.year);
}
 bool Date::before(const Date &other){
   if(year<other.year || month<other.month || day<other.day)
      return true;
   return false;
   
 }
 bool Date::beforeOrequal(const Date &other){
   return (equal(other) || before(other));
 }
 bool Date::after(const Date &other){
   return (!beforeOrequal(other));
 }
 void Date::print(){
cout<<day<<"-"<<month<<"-"<<year<<endl;

 }
 Date::~Date(){
   cout<<"good bye"<<endl<<endl;
 }