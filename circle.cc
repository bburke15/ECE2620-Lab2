#include "circle.h"
#define PI (4*atan(1)) //Defines an exact value for Pi
#include <cmath>
double circle::distance() {	//circle member function computes distance
   double dist = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
return dist;
}

double circle::radius() { //circle member function computes radius from distance
	return distance();
}

double circle::circumference() { //circle member function computes circumference	
	return (radius())*PI*2;;
}

double circle::area() { //circle member functions computes area
	return PI*radius()*radius();
}

void circle::populate_classobj(double x, double y, double x_new, double y_new) {
/*circle member function takes coordinates of two points as input parameters
and initializes data members of class object with these values */
	x1 = x;
	y1 = y;
	x2 = x_new;
	y2 = y_new;
}