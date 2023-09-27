#include <string>

template<class T>
class Item {
private:
    std::string name;
    T value;
public:
    Item(std::string name, T value) : name{name}, value(value) {}
    std::string get_name() const {return name;}
    T get_value() const {return value;}
};
