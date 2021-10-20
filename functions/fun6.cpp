#include <iostream>

int getValueFromUser()
{
  std::cout << "Enter an integer: ";
  int input {};
  std::cin >> input;

  return input;
}


int main()
{
  int x { getValueFromUser() }; // first call to get value

  int y { getValueFromUser() }; // second call to get value

  std::cout << x << "+" << y << "=" << x + y << '\n';

  return 0;
}
