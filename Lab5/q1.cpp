//Mohammed Osama Mohammed
//2231173006
//Lab05

#include<iostream>
#include <string>
using namespace std;


class Store {
private :
    int id;
    double profit;
    static double total_profit;
    static int storesCreated;

public :
    Store(int _id) { 
        id = _id;
        profit = 0;
        storesCreated++;
    } 
    Store(int _id, double _profit) {
        id = _id;
        profit = _profit;
        total_profit += _profit;
        storesCreated++;
    } 
    void addProfit(double amount) { 
        profit += amount;
        total_profit += amount;
    } 
    void printStatus(){
        cout << "ID: " << id << endl;
        cout << "Store Profit : " << profit<<endl;
        cout << "total profit " << total_profit << endl;
        cout << "Stores Created "  << storesCreated << endl; 
    }
    
    static double getTotalProfit() { 
        return total_profit;
    }
    static int totalStores () {
        return storesCreated;
    }
 };

 //static
int Store :: storesCreated = 0;



//
double Store::total_profit = 0;
int main() { 
    Store s1(101); 
    Store s2(102, 500);
    s1.addProfit(300);
    s2.addProfit(200); 
//cout << "Total Profit: " << Store::getTotalProfit() << endl;
//cout << "Stores created: " << Store ::storesCreated;
    s2.printStatus();

return 0;
}