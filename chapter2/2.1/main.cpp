#include <iostream>
#include "Rectangle.h"

int main()
{
    Rectangle r(0, 1, 5, 50), s(1, 0, 6, 6);
    Rectangle *t = &s;
    Rectangle er1(5, 3, 3, 3), er2(5, 3, 3, 3);

    if (r.GetHeight() * r.GetWidth() > t->GetHeight() * t->GetWidth()) {
        std::cout << "r";
    } else {
        std::cout << "s";
    }

    std::cout << " has the greater area" << std::endl;

    if (*t == s && t == &s) {
        std::cout << "t and s has same data members (*t == s), and t is point to `s` memeory adderss (t == &s)" << std::endl;
    }

    if (er1 == er2) {
        std::cout << "er1 and er2 has same data members" << std::endl;
    }

    std::cout << r << std::endl;

    return 0;
}