#include "tema2PAOO.h"
#include <iostream>

// Constructor
tema2PAOO::tema2PAOO(int x_val, const std::string& nume_val)
    : x(x_val), nume(nume_val) {}

tema2PAOO::~tema2PAOO() {
    cout << "Destructorul a fost chemat pentru " << nume << endl;
}

// Constructor de copiere
tema2PAOO::tema2PAOO(const tema2PAOO& other) 
    : x(other.x), nume(other.nume) {
    cout << "Copy constructorul a fost chemat pentru " << other.nume << endl;
}

// Operator de atribuire
tema2PAOO& tema2PAOO::operator=(const tema2PAOO& other) {
    if (this != &other) {
        x = other.x;
        nume = other.nume;
    }
    cout << "Operator de atribuire a fost chemat pentru " << other.nume << endl;
    return *this;
}

void tema2PAOO::print() const {
    cout << "x = " << x << ", nume = " << nume << endl;
}
using namespace std;
