//Mohammed Osama Bibi
//2231173006
//lab 04
#include <iostream>
using namespace std;

class BankAccount {

private:
    int num;
    double balance;

public:
    BankAccount (int _num) {
        num = _num;
    }
    BankAccount (int _num, double _balance) {
        num = _num;
        

        if (_balance < 0 ) {
            balance = 0;
        }
        else {
            balance = _balance;
        }
    }
    int getNum () {
        return num;
    }
    double getBalance () {
        return balance;
    }

    bool deposit (double amount) {
        balance += amount;
        return true;
    }

    bool withdraw (double amount) {
        if (amount <= balance){
            balance -= amount;
                return true;
        }
        
        if (amount > balance) {
            return false;
        }
    }

    void printStatement () {
        cout << "Account Number is: " << num << endl;
        cout << "current Balance is: " << balance << endl;

    }

};


int main () {
    BankAccount account1(11334, 100.00);
    BankAccount account2(25821, 500.00);

    if (account1.deposit(100.00)) {
        cout << "deposite is succefull " << endl;
    }
    else 
        cout << "Sorry operation failed " << endl;
    
        if (account2.deposit(300.00)) {
            cout << "deposite is succefull " << endl;
        }
        else 
            cout << "Sorry operation failed " << endl;
    
    if (account1.withdraw(500.00)) {
        cout << "withdrawing done succefully!" << endl;
    }
    else {
        cout << "Sadly operation fails " << endl;
    }

    return 0;
}
