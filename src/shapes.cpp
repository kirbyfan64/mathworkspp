#if __cplusplus <= 199711L
#error You need a compiler with C++11 support. \
Try using -std=c++0x or -std=gnu++11 for GCC.
#endif
#define _USE_MATH_DEFINES
/* In MinGW's and possibly other compiler's math.h, if
__STRICT_ANSI__ is defined, it won't define M_PI*/
#ifdef __STRICT_ANSI__
#undef __STRICT_ANSI__
#endif // __STRICT_ANSI__
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265
#endif
#include <mathworks\shapes.hpp>
#include <initializer_list>
#include <algorithm>

square::square()
{
    length = 0;
    perimeter = 0;
    area = 0;
}

void square::setLength(double newlength)
{
    length = newlength;
    perimeter = 0; area = 0;
}

double square::getLength()
{
    return length;
}

double square::getPerimeter()
{
    if (perimeter == 0)
    {
        perimeter = length * 4;
    }
    return perimeter;
}

double square::getArea()
{
    if (area == 0)
    {
        area = length * length;
    }
    return area;
}

rectangle::rectangle()
{
    perimeter = 0; area = 0;
}

void rectangle::setLength(double newlength)
{
    length = newlength;
    perimeter = 0;
    area = 0;
}

double rectangle::getLength()
{
    return length;
}

void rectangle::setWidth(double newwidth)
{
    width = newwidth;
    perimeter = 0;
    area = 0;
}

double rectangle::getWidth()
{
    return width;
}

double rectangle::getPerimeter()
{
    if (perimeter == 0)
    {
        perimeter = (length * 2) + (width * 2);
    }
    return perimeter;
}

double rectangle::getArea()
{
    if (area == 0)
    {
        area = length * width;
    }
    return area;
}

circle::circle()
{
    radius = 0;
    diameter = 0;
    circumference = 0;
    area = 0;
}

void circle::setRadius(double newradius)
{
    radius = newradius;
    diameter = radius * 2;
    circumference = 0;
    area = 0;
}

void circle::setDiameter(double newdiam)
{
    diameter = newdiam;
    radius = diameter / 2;
    circumference = 0;
    area = 0;
}

double circle::getRadius()
{
    return radius;
}

double circle::getDiameter()
{
    return diameter;
}

double circle::getCircumference()
{
    if (circumference == 0)
    {
        circumference = diameter * M_PI;
    }
    return circumference;
}

double circle::getArea()
{
    if (area == 0)
    {
        area = M_PI * (radius * radius);
    }
    return area;
}

triangle::triangle()
{
    auto init = std::initializer_list<double>({0,0,0});
    std::copy(init.begin(), init.end(), side);
    std::copy(init.begin(), init.end(), angle);
    perimeter = 0;
    area = 0;
    base = 0;
    height = 0;
}

void triangle::setSide(int sidenum, double length)
{
    side[sidenum - 1] = length;
    perimeter = 0;
}

double triangle::getSide(int sidenum)
{
    return side[sidenum - 1];
}

void triangle::setBase(double value)
{
    base = value;
    area = 0;
}

double triangle::getBase()
{
    return base;
}

void triangle::setHeight(double value)
{
    height = value;
    area = 0;
}

double triangle::getHeight()
{
    return height;
}

double triangle::getPerimeter()
{
    if (perimeter == 0)
    {
        perimeter = side[0] + side[1] + side[2];
    }
    return perimeter;
}

double triangle::getArea()
{
    if (area == 0)
    {
        area = base * height;
    }
    return area;
}

void triangle::setAngle(int anglenum, double measure)
{
    angle[anglenum - 1] = measure;
}

double triangle::getAngle(int anglenum)
{
    if (angle[anglenum - 1] == 0)
    {
        double angle1, angle2, angler, anglet;
        if (anglenum == 1)
        {
            angle1 = angle[1];
            angle2 = angle[2];
        }
        else if (anglenum == 1)
        {
            angle1 = angle[0];
            angle2 = angle[2];
        }
        else if (anglenum == 1)
        {
            angle1 = angle[0];
            angle2 = angle[1];
        }
        anglet = angle1 + angle2;
        angler = 180 - anglet;
        angle[anglenum - 1] = angler;
    }
    return angle[anglenum - 1];
}
