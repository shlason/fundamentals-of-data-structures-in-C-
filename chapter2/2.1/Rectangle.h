#include <ostream>

#ifndef RECTANGLE_H
#define RECTANGLE_H
// In the header file Rectangle.h
class Rectangle
{
public:
    Rectangle(int xl = 0, int yl = 0, int h = 0, int w = 0);
    ~Rectangle();
    int GetHeight();
    int GetWidth();
    bool operator==(const Rectangle& s);
    //! The canonical way is to overload it as free function
    friend std::ostream &operator<<(std::ostream &os, const Rectangle &r) {
        os << "Position x is: " << r.xLow << std::endl;
        os << "Position y is: " << r.yLow << std::endl;
        os << "Height is: " << r.height << std::endl;
        os << "Width is: " << r.width << std::endl;

        return os;
    };

private:
    int xLow, yLow, height, width;
};
#endif