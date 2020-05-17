/*****************************************
 * Implementation of Point class
 * 
 * @author Vikas Choudhary
 * @date 18.05.2020
 ****************************************/

#include "point.h"

// Constructors
Point::Point(): _x(0.0), _y(0.0) {}

Point::Point(float x, float y): _x(x), _y(y) {}

// Getters
float Point::getX(void) const
{
    return _x;
}

float Point::getY(void) const 
{
    return _y;
}

// Setters
void Point::setY(float x)
{
    _x = x;
}

void Point::setY(float y)
{
    _y = y;
}

// Update
void Point::updatePoint(float x_delta, float y_delta)
{
    _x += x_delta;
    _y += y_delta;
}