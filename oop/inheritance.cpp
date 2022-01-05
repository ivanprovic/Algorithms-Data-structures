#include <iostream>
using namespace std;

class Base {
    public:
        virtual void printType() { //creates func called printType
            subfunction();
            cout << "I'm inherited!" << '\n' << '\n';
        }

        virtual void subfunction(){
            //empty
        }
};

class SubFirst : public Base {
virtual void subfunction() {
    cout << "I'm one type of sub-class!" << '\n';
}
};

// add subsecond

int main()
{
    return 0;
}