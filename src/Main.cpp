/*
 * Main.cpp
 *
 *  Created on: 24 Jun 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

void changeValue(double &value)		// Assign a ref variable back to the original 4.321 value
{
	value = 123.4;					// Change that original value of 4.321 to 123.4
									// Using ref variables as can be seen is useful for when you want
									// to use a function to change values but dont want to have to
									// return anything.
}

int main()
{
	int val1 = 8;
	int &val2 = val1;		// An alternative use of the ampersand, it DOES NOT mean 'address of'
							// In this case we are referencing val1, we are essentially saying that
							// val2 is just another name for val1, what ever we do with val2 will
							// also happen with val1.
	val2 = 10;

	cout << "Value 1 = " << val1 << endl;
	cout << "Value 2 = " << val2 << endl;


	double value = 4.321;
	changeValue(value);		// Pass the value 4.321

	cout << value << endl;

	return 0;
}


