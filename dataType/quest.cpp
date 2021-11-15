/* 
prime number is a whole number greater than 1 that can only be divided
evenly by 1 and itself. Write a program that asks the user to enter
a number 0 through 9 (inclusive).
If the user enters a number within this range that is prime (2, 3, 5, or 7),
print “The digit is prime”. Otherwise, print “The digit is not prime”.
*/ 

#include <iostream>

bool isPrime(int x)
{
  return ( x == 2 || x == 3 || x == 5 || x == 7); // if user entered 2 or 3 or 5 or 7 - PRIME
  
}

int main()
{
  std::cout << "Enter a number 0 through 9: ";
  int x {};
  std::cin >> x;

  if (isPrime(x) )
    std:: cout << "The digit is prime\n";
  else
    std::cout << "The digit is not prime\n";
  return 0;
}
