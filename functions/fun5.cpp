#include <iostream>

int getValueFromUser() //this func now returns an integer value
{
  std::cout << "Enter an integer: ";
  int input{};
  std::cin >> input;

  return input; // return the value the user entered back to the caller
}

int main()
{
  int num { getValueFromUser() }; // initialize num with the return value of getValueFromUser()

  std::cout << num << "double is: " << num * 2 << '\n';

  return 0;
}
