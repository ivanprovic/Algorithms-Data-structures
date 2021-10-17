#include <iostream> //for std::cout

void doPrint()
{
  std::cout << "In doPrint()\n";
}

// Definition of funciton main()
int main()
{
  std::cout <<"starting main()\n";
  doPrint(); //doPrint() called for the first time
  doPrint(); //doPrint() called for the second time

  std::cout <<"ending main()\n";

  return 0;
}
