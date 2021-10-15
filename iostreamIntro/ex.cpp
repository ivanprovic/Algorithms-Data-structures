#include <iostream>

//initializaton

int main()
{
	int width;
	width = 5; // copy assignment of value 5 into variable width

	int a ( 5 ); //direct initialization -> for simple data types

	int b { 5 }; // DIRECT list initialization (more consistent)
	
	int height = { 6 }; 

	int depth {}; // zero initialization to value 0

	return 0;
}

