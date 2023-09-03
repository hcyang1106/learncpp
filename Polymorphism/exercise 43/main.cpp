#include "Animal.h"
#include "Lion.h"
#include <iostream>

int main() {
    Animal *p = new Lion;
    std::cout << p->get_noise() << std::endl;
    std::cout << p->get_num_legs() << std::endl;
}