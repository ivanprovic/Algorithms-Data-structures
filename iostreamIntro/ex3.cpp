#include <iostream>

int main()
{
    std::cout <<" Enter two numbers separated by a space: ";

    int x{  }; //define variable x to hold user input

    int y{  }; //define variable y to hold user input

    std::cin >> x >> y; //get two numbers and store in variable x and y

    std::cout << "You entered " << x << " and " << y << '\n';

    return 0;
}