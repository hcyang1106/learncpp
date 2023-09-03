#include "Dog.h"
#include <iostream>

int main() {
    Dog spot;
    spot.set_name("Howard");
    spot.set_age(27);
    std::cout << spot.get_name() << std::endl;
    std::cout << spot.get_age() << std::endl;

    std::cout << spot.get_human_years() << std::endl;
    std::cout << spot.speak() << std::endl;
}