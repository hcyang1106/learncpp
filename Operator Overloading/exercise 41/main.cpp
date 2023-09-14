// Section 14
// Overloading copy assignment
#include <iostream>
#include "Money.h"

using namespace std;

int main() {
    Money a(110);
    Money b(91);
    cout << (a + b).get_dollars() << " " << (a + b).get_cents() << endl;
    return 0;
}

