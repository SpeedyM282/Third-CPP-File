/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 2.12.2020
Purpose: Program to calculate area of following figures using function overloading:
Circle
Rectangle
Triangle
Square
(Hint: 1. Create 4 functions with same name 'area'.
2. Each function to calculate area of one figure.)
*/

#include<iostream>
#include<iomanip>
using namespace std;
/*Declaring function for better view*/
void view(); 
/*Definition of function for calculating area of a circle*/
void area(){
	float pi = 3.14, area, radius;
	view(); 
	cout << "Program to calculate the area of a circle" << endl;
	view(); 
	cout << "Please enter value of radius: ";
	cin >> radius;
	area = pi*radius*radius; // Formula of area of a circle
	view(); 
	cout << "Area = " << area << endl;
	view(); 
}
/*Definition of function for calculating area of a rectangle*/
void area(float length){
	float width, area;
	view(); 
	cout << "Program to calculate the area of rectangle" << endl;
	view(); 
	cout << "Please enter values of length and width: ";
	cin >> length >> width;
	area = length*width; // Formula of area of a rectangle
	view(); 
	cout << "Area = " << area << endl;
	view(); 
}
/*Definition of function for calculating area of a square*/
void area(float side, float area){
	view(); 
	cout << "Program to calculate the area of square" << endl;
	view(); 
	cout << "Please enter value of side: ";
	cin >> side;
	area = side*side; // Formula of area of a square
	view(); 
	cout << "Area = " << area << endl;
	view(); 
}
/*Definition of function for calculating area of a triangle*/
void area(float base, float height, float area){
	view(); 
	cout << "Program to calculate the area of triangle" << endl;
	view(); 
	cout << "Please enter values of base and height: ";
	cin >> base >> height;
	area = 0.5*base*height; // Formula of area of a triangle
	view(); 
	cout << "Area = " << area << endl;
	view(); 
}


int main()
{
	float a, b, c;
	int i;
	
	for(;;){
		view(); 
		cout << "              Choose the figure" << endl;
		view(); 
		cout << endl;
		cout << "1. Circle";
		cout << "            2. Rectangle" << endl << endl;
		cout << "3. Square";
		cout << "            4. Triangle" << endl << endl;
		cout << "0. Exit \n\n";
		cout << "Please choose any figure: ";
		cin >> i;
		if(i==1){
			area(); // Calling function for calculating area of circle
		}else if(i==2){
			area(a); // Calling function for calculating area of rectangle
		}else if(i==3){
			area(a, b); // Calling function for calculating area of square
		}else if(i==4){
			area(a, b, c); // Calling function for calculating area of triangle
		}else if(i==0){
			cout << "\n\nHave a Good Day!\n\n";
			exit(0);	
		}else{
			view();
			cout << "Wrong input!" << endl;
			view();
		}
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
