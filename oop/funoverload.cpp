//function overloading; int and float
#include <iostream>
using namespace std;

//fun with float type param
float absolute(float var){
    if (var < 0.0)
        var = -var;
    return var;
}

// funct with int type param
int absolute(int var) {
    if (var < 0)
        var = -var;
    return var;
}

int main()
{
    //calling func with int type param
    cout << "absolute val of -5 =  " <<absolute(-5) << '\n';

    return 0;
}