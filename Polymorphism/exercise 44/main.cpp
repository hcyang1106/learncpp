#include "Animal.h"
#include "Dog.h"
#include <iostream>

int main() {
    Animal *p = new Dog("Howard", 27);
    std::cout << p->get_name() << " " << p->get_age() << std::endl;
    std::cout << p->get_noise() << std::endl;
    std::cout << p->get_num_legs() << std::endl;
}