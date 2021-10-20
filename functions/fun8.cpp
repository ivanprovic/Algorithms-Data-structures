// this is a simplified version of code written in fun7.cpp

#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input {};
    std::cin >> input;

    return input;
}

void printDouble(int value)
{
    std::cout << value << "doubled is: " << value * 2 << '\n';

}

int main()
{
    printDouble(getValueFromUser());
    return 0;
}