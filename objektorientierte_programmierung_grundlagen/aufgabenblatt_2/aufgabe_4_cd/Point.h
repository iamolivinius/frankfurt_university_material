#ifndef POINT_H_
#define POINT_H_

class Point {

private:
  double x_coord;
  double y_coord;
  double z_coord;

public:
  // Constructors
  Point();                    // default constructor
  Point(double x, double y, double z);  // two-argument constructor

  // Destructor
  ~Point();

  // Mutator methods
  void setX(double val);
  void setY(double val);
  void setZ(double val);

  // Accessor methods
  double getX();
  double getY();
  double getZ();

  double computeDistance(Point& p);
};

#endif /* POINT_H_ */
