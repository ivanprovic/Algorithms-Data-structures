#include <bits/stdc++.h>

//passing array to functions

void passValue(int value) // value is a copy of the argument
{
    value = 99; // changing it here won't cgange the val of arg
}

void passArray(int prime[5]) //
{
    prime[0] = 11;
    prime[1] = 7;
    prime[2] = 5;
    prime[3] = 3;
    prime[4] = 2;
}

int main()
{

    return 0;
}