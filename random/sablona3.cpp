#include <iostream>

int main()
{
    int prime[5]{}; // hold the first 5 prime numbers
    prime[0] = 2; //The firs element has index 0
    prime[1] = 3;
    prime[2] = 5;
    prime[3] = 7;
    prime[4] = 11;//the las element has index 5 (array length-1)

    std::cout << "The lowest prime num is: " << prime[0] << '\n';
    std::cout << "The sum of the first 5 primes is: " << prime[0] + prime[1] + prime[2] + prime[3] + prime[4] << '\n';
    

    return 0;
}