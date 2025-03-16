//M.Osama Bibi
//2231173006

#include <iostream>
#include "Printer.h"


using namespace std;

int main() {
    Printer p1(1);
    Printer p2(2);
    
    p1.startPrint();
    p2.startPrint();
    p1.stopPrint();
    p2.stopPrint();
    
    return 0;
}
