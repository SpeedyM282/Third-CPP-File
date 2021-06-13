/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 2.12.2020
Purpose: Program using function overloading:
To find largest among three integers.
To find largest among three floating point numbers.
*/

#include<iostream>
#include<iomanip>
using namespace std;
/*Declaration of function for better view*/
void view();
/*Defining function for finding the largest number among three integers*/
int largest(int a, int b, int c){
	return ((a > b) && (a > c) ? a : (b > a) && (b > c) ? b : c);	
}
/*Defining function for finding the largest number among three float numbers*/
float largest(float x, float y, float z){
	return ((x > y) && (x > z) ? x : (y > x) && (y > z) ? y : z);
}


int main()
{
	float x, y, z;
	int a, b, c, i;
	view(); 
	cout << "Choose with which kind of number you want to work" << endl;
	view(); 
	cout << endl;
	cout << "1. Integer" << setw(25) << "2. Float" << endl << endl;
	cout << "Please choose type of number: ";
	cin >> i;
/*If condition when the choice is 1, 2 or other inputs*/	
	if(i==1){
		view(); 
		cout << "Please enter any three integers: ";
		cin >> a >> b >> c;
		view(); 
		cout << "Largest = " << largest(a, b, c) << endl;
		view();
	}else if(i==2){
		view(); 
		cout << "Please enter any three float numbers: ";
		cin >> x >> y >> z;
		view(); 
		cout << "Largest = " << largest(x, y, z) << endl;
		view();
	}else{
		view(); 
		cout << setw(30) << "Wrong input!" << endl;
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
















