#ifndef tema2PAOO_H
#define tema2PAOO_H

#include <string>
using namespace std;

class tema2PAOO {
private:
    int x;
    string nume;

public:
    // Constructor
    tema2PAOO(int x_val, const string& nume_val);

    // Destructor
    ~tema2PAOO();

    // Constructor de copiere
    tema2PAOO(const tema2PAOO& other);

    // Operator de atribuire
    tema2PAOO& operator=(const tema2PAOO& other);
    
    void print() const;
};

#endif 
