//Brendan Burke
//ECE 2620
//Lab 2
#include "circle.h"
#include <iostream>
using namespace std;

void menu() {
	cout << "(1) Compute the radius of the circle" << endl;
	cout << "(2) Compute the circumference of the cirlce" << endl;
	cout << "(3) Compute the area of the circle" << endl;
	cout << "(4) Exit" << endl;
} //Menu function outputs text for the four options to the screen
		
int main()
{
	circle mycircle; //instantiated object mycircle belonging to class circle
	double x1, y1, x2, y2; //declare variables
	cout << "Please enter the coordinates for the center of the circle: " << endl;
	cout << "x= "; //when prompted, user inputs x and y values for coordinates
	cin >> x1;
	cout << "y= ";
	cin >> y1;
	cout << "Please enter the coordinates for another point on the circle: " << endl;
	cout << "x= ";
	cin >> x2;
	cout << "y= ";
	cin >> y2;
	mycircle.populate_classobj(x1,y1,x2,y2); /*initialize data members of class
	object with coordinate values*/
	int option; //declare variable
	menu(); //user is prompted with menu options printed to screen
	cout << "Select an operation: ";
	cin >> option; //user inputs an option
while(option != 4){

	switch (option) {

	case 1: //if option 1,then compute circle radius
	cout << "The radius of the circle is " << mycircle.radius() << endl;
		break;

	case 2: //if option 2,then compute circumference
	cout << "The circumference of the circle is " << mycircle.circumference() << endl;
		break;

	case 3: //if option 3,then compute area
	cout << "The area of the circle is " << mycircle.area() << endl;
		break;

	case 4: //exit
		break;

	default: //try again with a valid numerical input
	cout << "Not Valid" << endl;
		break;
}
menu();
cin >> option;
}
	return 0;
}

