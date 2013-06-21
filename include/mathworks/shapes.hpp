#ifndef SHAPES_HPP_INCLUDED
#define SHAPES_HPP_INCLUDED


class square
{
public:
    square();
    void setLength(double length);
    double getLength();
    double getPerimeter();
    double getArea();
private:
    double length;
    double perimeter;
    double area;
};

class rectangle
{
public:
    rectangle();
    void setLength(double length);
    double getLength();
    void setWidth(double width);
    double getWidth();
    double getPerimeter();
    double getArea();
private:
    double length;
    double width;
    double perimeter;
    double area;
};

class circle
{
public:
    circle();
    void setRadius(double newradius);
    void setDiameter(double newdiam);
    double getRadius();
    double getDiameter();
    double getCircumference();
    double getArea();
private:
    double radius;
    double diameter;
    double circumference;
    double area;
};

class triangle
{
public:
    triangle();
    void setSide(int side, double length);
    double getSide(int sidenum);
    void setBase(double value);
    double getBase();
    void setHeight(double value);
    double getHeight();
    double getPerimeter();
    double getArea();
    void setAngle(int anglenum, double measure);
    double getAngle(int anglenum);
private:
    double side[3];
    double angle[3];
    double perimeter;
    double area;
    double base;
    double height;
};

#endif // SHAPES_HPP_INCLUDED
