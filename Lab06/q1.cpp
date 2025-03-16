//Mohammed Osama Mohamammed
//2231173006
//Lab06

//implementaion = cpp   |||    header = .h  |||  main = another cpp
//member initializer constructor : 

#include <iostream>
#include "Printer.h"
using namespace std;

bool Printer::printing = false;

Printer::Printer(int _id) : id(_id), idle(true) {}

Printer::~Printer() {
    cout << "Printer " << id << " is removed..." << endl;
}

bool Printer::isPrinting() {
    return printing;
}

void Printer::startPrint() {
    if (!printing) {
        printing = true;
        idle = false;
        cout << "Printer " << id << " is printing..." << endl;
    } else {
        cout << "Printer " << id << " can't print at this time. Please try again later." << endl;
    }
}

void Printer::stopPrint() {
    if (!idle) {
        printing = false;
        idle = true;
        cout << "Printer " << id << " has stopped." << endl;
    } else {
        cout << "Printer " << id << " is idle; there is nothing to stop!" << endl;
    }
}
