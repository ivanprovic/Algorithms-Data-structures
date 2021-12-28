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

//class derived from the base class
class DerivedClass: public BaseClass {
    public:
        int var_derived;

        //func to display the base
        //and derived class members
        void display()
        {
            cout << "Displaying base class"
                 << "variable var_base: " << var_base << '\n';
            cout << "Displaying derived "
                 << " class variable var_derived: "
                 << var_derived << endl;
        }
};

int main()
{
    // pointer to base class
    BaseClass* base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    //pointing to derived class
    base_class_pointer = &obj_derived;

    base_class_pointer->var_base = 34;
    return 0;
}