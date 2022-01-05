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

class SubSecond : public Base {
virtual void subfunction() {
    cout << "I'm another type of sub class!" << '\n';
}
};

int main()
{
    SubFirst first;
    first.printType();

    SubSecond second;
    second.printType();
    return 0;
}