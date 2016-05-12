#include <cmath>

#include "Point.h"

/**
 * Default constructor:  initializes the point to (0, 0).
 */
Point::Point() {
  x_coord = 0;
  y_coord = 0;
  z_coord = 0;
}

/**
 * Initializes the point to (x, y).
 *
 * @param x,y Coordinates of the point.
 */
Point::Point(double x, double y, double z) {
  x_coord = x;
  y_coord = y;
  z_coord = z;
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

/**
 * Sets the z - coordinate of the Point
 *
 * @param val the new z - coordinate
 */
void Point::setZ(double val) {
  z_coord = val;
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

/**
 * Gets the z - coordinate of the Point
 *
 * @return the z - coordinate
 */
double Point::getZ() {
  return z_coord;
}

double Point::computeDistance(Point& p) {
  double xd = p.x_coord - x_coord;
  double yd = p.y_coord - y_coord;
  double zd = p.z_coord - z_coord;

  return sqrt(xd * xd + yd * yd + zd * zd);
}
