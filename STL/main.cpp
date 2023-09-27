#include "template_class.h"
#include <iostream>

int main() {
    Item<int> item1 {"Howard", 100};
    std::cout << item1.get_name() << " " << item1.get_value() << std::endl;

    Item<std::string> item2 {"Howard", "Student"};
    std::cout << item2.get_name() << " " << item2.get_value() << std::endl;
}