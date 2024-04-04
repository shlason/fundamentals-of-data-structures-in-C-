// In the source file of Rectangle.cpp
#include "Rectangle.h"

Rectangle::Rectangle(int xl, int yl, int h, int w)
{
    xLow = xl;
    yLow = yl;
    height = h;
    width = w;
}

Rectangle::~Rectangle() {}

int Rectangle::GetHeight() { return height; }
int Rectangle::GetWidth() { return width; }

bool Rectangle::operator==(const Rectangle& s)
{
    if (this == &s) {
        return true;
    }

    if ((xLow == s.xLow) && (yLow == s.yLow) && (height == s.height) && (width == s.width)) {
        return true;
    }

    return false;
}
