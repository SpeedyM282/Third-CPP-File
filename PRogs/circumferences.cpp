/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 2.12.2020
Purpose: Program to calculate circumference of the following figures using function overloading:
Circle
Rectangle
Triangle
Square
(Hint: 1. Create 4 functions with same name circumference.
2. Each function to calculate circumference of one figure.)
*/

#include<iostream>
using namespace std;
/*Declaring of function for better view*/
void view(); 
/*Defining function for calculating circumference of circle*/
void circumference(){
	float radius, circum, pi=3.14;
	view();
	cout << "Program to calculate the circumference of circle" << endl;
	view();
	cout << "Please enter the value of radius: ";
	cin >> radius;
	circum = 2*pi*radius; // Formula of circumference of a circle
	view();
	cout << "Circumference = " << circum << endl;
	view();
}
/*Defining function for calculating circumference of square*/
void circumference(float side){
	float circum;
	view(); 
	cout << "Program to calculate the circumference of square" << endl;
	view(); 
	cout << "Please enter the value of side: ";
	cin >> side;
	circum = 4*side; // Formula of circumference of a square
	view(); 
	cout << "Circumference = " << circum << endl;
	view();	
}
/*Defining function for calculating circumference of rectangle*/
void circumference(float length, float width){
	float circum;
	view(); 
	cout << "Program to calculate the circumference of rectangle" << endl;
	view(); 
	cout << "Please enter the values of width and length: ";
	cin >> width >> length;
	circum = 2*(length+width); // Formula of circumference of a rectangle
	view(); 
	cout << "Circumference = " << circum << endl;
	view(); 
}
/*Defining function for calculating circumference of triangle*/
void circumference(float a, float b, float c){
	float circum;
	view(); 
	cout << "Program to calculate the circumference of triangle" << endl;
	view(); 
	cout << "Please enter the values of 'a', 'b' and 'c' sides: ";
	cin >> a >> b >> c;
	circum = a+b+c; // Formula of circumference of a triangle
	view(); 
	cout << "Circumference = " << circum << endl;
	view(); 
}



int main() 
{
	float a, b, c;
	int i;
	view(); 
	cout << "              Choose the figure" << endl;
	view();
	cout << endl;
	cout << "1. Circle";
	cout << "               2. Square" << endl << endl;
	cout << "3. Rectangle";
	cout << "            4. Triangle" << endl << endl;
	cout << "Please choose any figure: ";
	cin >> i;
	if(i==1){
		circumference(); // Calling function for calculating circumference of circle
	}else if(i==2){
		circumference(a); // Calling function for calculating circumference of square
	}else if(i==3){
		circumference(a, b); // Calling function for calculating circumference of rectangle
	}else if(i==4){
		circumference(a, b, c); // Calling function for calculating circumference of triangle
	}else{
		view(); 
		cout << "Wrong input!" << endl;
		view(); 
	}	
	system("pause");
	return 0;
}
/*Definition of function for better view*/
void view(){
	int j=0;
	while(j<50){
		cout << "-";
		j++;
	}
	cout << endl;
}
