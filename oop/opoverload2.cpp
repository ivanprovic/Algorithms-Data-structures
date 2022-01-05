#include <iostream>
using namespace std;

class Fraction
{
    int num, den;
public:
    Fraction(int n , int d) { num = n; den = d; }

    operator float() const {
        return float(num) / float(den);
    }
};

int main()
{
    Fraction f(2, 5);
    float val = f;
    cout << val << '\n';
    return 0;
}