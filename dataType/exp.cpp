#include <iostream>
#include <cstdint>


// if you want to do integer exponentiation, use your own function
//exp must be non-negative
std::int_fast64_t powint(int base, int exp)
{
    std::int_fast64_t result{ 1 };
    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }

    return result;
}

int main()
{
    std::cout << powint(7, 12);
}