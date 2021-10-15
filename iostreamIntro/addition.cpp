#include <iostream>

int main()
{

    std::cout << "Enter an integer: " << " ";

    int x { };
    std::cin >> x;

    std::cout <<"Enter another integer: " << " ";

    int y {  };
    std::cin >> y;

    std::cout << x <<" + "<< y << " is " << x + y << '\n';
    std::cout << x <<" - "<< y << " is " << x - y << '\n';  

    return 0;
}