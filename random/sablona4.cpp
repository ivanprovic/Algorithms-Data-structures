#include <bits/stdc++.h>
using namespace std;

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
    int value{ 1 };
    cout << "before passValue: " << value << '\n';
    passValue(value);
    cout << "after passValue: " << value << '\n';

    int prime[5]{2, 3, 5, 7, 11 };
    cout << "before passAray: " <<prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << '\n';
    passArray(prime);
    std::cout << "after passArray: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << '\n';


    return 0;
}