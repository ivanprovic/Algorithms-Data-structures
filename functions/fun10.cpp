#include <iostream>

int add(int x, int y) //x and y are created and enter scope here
{
    // x and y are visible within this function
    return x + y; 
} // x and y go out of scope and are destroyed here



int main()
{
    int a{ 5 }; // a is created, initialized and enters scope
    int b{ 6 }; // b is created, initialized and enters scope

    // a and b are usable within this function only

    std::cout << add(a, b) << '\n'; // calls funciton add() with x=5 and y = 6

    return 0;
} // b and a go out of scope and are destroyed here


/* 
execution starts at the top of main
main‘s variable a is created and given value 5
main‘s variable b is created and given value 6
function add is called with values 5 and 6 for arguments
add‘s variable x is created and initialized with value 5
add‘s variable y is created and initialized with value 6
operator+ evaluates expression x + y to produce the value 11
add copies the value 11 back to caller main
add‘s y and x are destroyed
main prints 11 to the console
main returns 0 to the operating system
main‘s b and a are destroyed
*/