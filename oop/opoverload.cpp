#include <iostream>
using namespace std;

class Complex {
    private:
        int real, imaginary;
    public:
        Complex(int r = 0, int i = 0) {real = r; imaginary = i;}

        Complex operator + (Complex const &obj) {
            Complex res;
            res.real = real + obj.real;
            res.imaginary = imaginary + obj.imaginary;
            return res;
        }
        void print() { cout << real << " + i" << imaginary << '\n'; } 
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
}