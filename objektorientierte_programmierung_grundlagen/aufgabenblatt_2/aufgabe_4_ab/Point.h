#ifndef POINT_H_
#define POINT_H_

#include <cmath>

class Point {

private:
    double x_coord;
    double y_coord;

public:
    // Constructors
    Point();                    // default constructor
    Point(double x, double y);  // two-argument constructor

    // Destructor
    ~Point();

    // Mutator methods
    void setX(double val);
    void setY(double val);

    // Accessor methods
    double getX();
    double getY();

    // Exercise 2.3, part b)
    static double computeArea(Point& a, Point& b, Point& c);
};

#endif /* POINT_H_ */
