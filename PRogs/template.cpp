/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 2.12.2020
Purpose: Convert function template for problem 3.
*/

#include<iostream>
#include<iomanip>
using namespace std;
/*Declaration of function for better view*/
void view();
/*To create new function template*/
template<class T>
T largest(T a, T b, T c){
	return ((a > b) && (a > c) ? a : (b > a) && (b > c) ? b : c);
}

int main() 
{
	int a, b, c, i;
	float x, y, z;
	view();
	cout << "Program to find the largest number among 3 numbers" << endl;
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
