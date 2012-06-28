//This program finds the size of fundamental data types.

#include <iostream>
#include <climits> 
#include <cfloat>
using namespace std; 

int main() 
{
	cout <<"This program shows the size of the Fundamental Data Types on this system, as well as thier maximum and minimum values." << endl; 
	
	//Integer Types

	cout <<"**************************************************************************" << endl << endl; 
	cout <<"Integer Types" << endl << endl; 

	cout <<"The size of short is:" << sizeof(short) << "bytes" << endl << endl; 
	cout <<"The maximum size of a short is:" << SHRT_MAX << endl;
	cout <<"The minimum size of a short is:" << SHRT_MIN << endl; 
	
	cout <<"The size of int is:" << sizeof(int) << "bytes" << endl << endl;  
	cout <<"The maximum size of an int is:" << INT_MAX << endl;
	cout <<"The minimum size of an int is:" << INT_MIN << endl; 

	cout <<"The size of long is:" << sizeof(long) << "bytes" << endl << endl;
	cout <<"The maximum size of a long is:" << LONG_MAX << endl; 
	cout <<"The minimum size of a long is:" << LONG_MIN << endl; 


	// The following long long type may not exist on all computers. 
	cout <<"The following Integer Type: long long, may not exist on all computers." << endl << endl; 

	cout <<"The size of long long is:" << sizeof(long long) << "bytes" << endl << endl;
	cout <<"The maximum size of a long long is:" << LLONG_MAX << endl; 
	cout <<"The minimum size of a long long is:" << LLONG_MIN << endl; 


	// Character and Boolean Types
	cout <<"*************************************************************************"<< endl << endl; 
	cout <<"Character and Boolean Types:" << endl << endl; 

	cout <<"The size of a char is:" << sizeof(char) << "bytes" << endl << endl;
	cout <<"The size of a Boole is:" << sizeof(bool) << "bytes" << endl << endl;

	// Floating Point Types
	cout <<"*************************************************************************" << endl << endl; 
	cout <<"The size of the Floating Point Types are:" << endl << endl; 

	cout <<"The size of a float is:" << sizeof(float) << "bytes" << endl << endl; 
	cout <<"The minimum positive value of a float is:" << FLT_MIN << endl; 
	cout <<"The minimum epsilon value of a float is:" << FLT_EPSILON << endl; 
	cout <<"The maximum value of a float is:" << FLT_MAX << endl << endl; 

	cout <<"The size of double is:" << sizeof(double) << "bytes" << endl << endl;
	cout <<"The minimum positive value of a double is:" << DBL_MIN << endl; 
	cout <<"The minimum epsilon value of a double is:" << DBL_EPSILON << endl; 
	cout <<"The maximum value of a double is:" << DBL_MAX << endl; 


	// The Long Double may not exist on all computers
	cout <<"The following Floating Point Type: long double, may not exist on all computers." << endl << endl; 

	cout <<"The size of long double is:" << sizeof(long double) << "bytes" << endl; 
	cout <<"The minimum positive value of a long double is:" << LDBL_MIN << endl; 
	cout <<"The minimum epsilon value of a long double is:" << LDBL_EPSILON << endl; 
	cout <<"The maximum value of a long double is:" << LDBL_MAX << endl << endl; 

	cout <<"The End!" << endl << endl << endl; 

	return 0; 

}
