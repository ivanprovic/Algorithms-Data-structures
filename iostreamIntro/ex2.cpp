#include <iostream>

int main()
{
    std::cout << "Enter a number: ";

    int x{ }; //variable x to hold user input (zero-initialize it)

    std::cin >> x; //get number from keyboard and store it

    std::cout << "You entered " << x << '\n';

    return 0;
}
