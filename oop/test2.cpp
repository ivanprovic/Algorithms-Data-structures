//using functions to print fractions to the command line
#include <iostream>
using namespace std;

class Fraction {
    public:
        Fraction(int top = 0, int bottom = 1) {
            num = top;
            den = bottom;
        }

        void show(){
            cout << num << "/" << den << '\n';
        }
    private:
        int num, den;
};

int main()
{
    return 0;
}