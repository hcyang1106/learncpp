#include "Dog.h"
#include <iostream>

int main() {
    Dog spot("Howard", 27);
//    spot.set_name("Howard");
//    spot.set_age(27);
    Dog copy = spot;
    std::cout << spot.get_name() << std::endl;
    std::cout << spot.get_age() << std::endl;
    std::cout << std::endl;
    std::cout << copy.get_name() << std::endl;
    std::cout << copy.get_age() << std::endl;
}