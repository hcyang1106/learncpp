/********************************************************
Provide the definition of the Lion class here.
Remember, this is the definition, or implementation, of
the methods we declared in the Lion.h class declaraion
will be implemented here.
*******************************************************/

#include "Dog.h"

// Implementing Dog's methods below this line
Dog::Dog(const std::string& name, int age): Animal(name, age) {

}

std::string Dog::get_noise() {
    return "Woof";
}

int Dog::get_num_legs() {
    return 4;
}