#include <iostream>
using namespace std;

//base class
class BaseClass {
    public:
        int var_base;

        //func to display the base class memb
        void display()
        {
            cout << "Displaying Base class" << "variable var_base"
                << var_base << '\n';
        }
};

int main()
{
    return 0;
}