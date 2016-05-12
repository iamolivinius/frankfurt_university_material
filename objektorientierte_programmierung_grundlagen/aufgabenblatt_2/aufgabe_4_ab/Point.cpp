#include <cmath>

#include "Point.h"

/**
 * Default constructor:  initializes the point to (0, 0).
 */
Point::Point() {
    x_coord = 0;
    y_coord = 0;
}

/**
 * Initializes the point to (x, y).
 *
 * @param x,y Coordinates of the point.
 */
Point::Point(double x, double y) {
    x_coord = x;
    y_coord = y;
}

/**
 * Destructor - Point allocates no dynamic resources.
 */
Point::~Point() {
}

// Setter Methods (Mutators):

/**
 * Sets the x - coordinate of the Point
 *
 * @param val the new x - coordinate
 */
void Point::setX(double val) {
    x_coord = val;
}

/**
 * Sets the y - coordinate of the Point
 *
 * @param val the new y - coordinate
 */
void Point::setY(double val) {
    y_coord = val;
}

// Getter Methods (Accessors):

/**
 * Gets the x - coordinate of the Point
 *
 * @return the x - coordinate
 */
double Point::getX() {
    return x_coord;
}

/**
 * Gets the y - coordinate of the Point
 *
 * @return the y - coordinate
 */
double Point::getY() {
    return y_coord;
}

double Point::computeArea(Point& a, Point& b, Point& c) {
    return std::abs((a.x_coord * (b.y_coord - c.y_coord) + b.x_coord * (c.y_coord - a.y_coord) + c.x_coord * (a.y_coord - b.y_coord)) / 2);
}
