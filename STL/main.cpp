#include <iostream>
#include <string>

template<typename T>
T min(T a, T b) {
    return (a < b) ? a : b;
}

template <class T1, class T2>
void func(T1 a, T2 b) {
    std::cout << a << " " << b << std::endl;
}

struct Person {
    std::string name;
    int age;
    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }
    friend std::ostream &operator << (std::ostream &os, Person &p) {
        os << p.name << " " << p.age << std::endl;
        return os;
    }
};

int main() {
    Person p1 {"Curly", 50};
    Person p2 {"Moe", 30};
    Person p3 = min(p1, p2);

    std::cout << min<int>(2, 3) << std::endl;
    std::cout << min(2, 3) << std::endl;
    std::cout << min('A', 'B') << std::endl;
    std::cout << p3 << std::endl;
}