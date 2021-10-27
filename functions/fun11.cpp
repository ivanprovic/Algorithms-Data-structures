#include <iostream>

int add(int x, int y); // forward decalaration of add() (using a function prototype)


int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0; //this works beacause we forward declared add() above
}

int add(int x, int y) //even though the body of add() isn't defined until here
{
    return x + y;
}