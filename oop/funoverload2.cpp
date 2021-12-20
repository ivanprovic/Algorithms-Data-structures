#include <iostream>
using namespace std;

//fun with 2 params
void display(int var1, double var2) {
    cout << "Integer number: " << var1;
    cout << " and double number: " << var2 << '\n';
}

//func with double type single paramater
void display(double var) {
    cout << "Double number: " << var << '\n';
}

//fun with int type single param
void display(int var) {
    cout << "Integer number: " << var << '\n';
}

int main()
{
    int a = 5;
    double b = 5.5;

    //call function with int type param
    display(a);

    // call function with double type param
    display(b);

    //call function with 2 params
    display(a, b);

    return 0;
}