#include <iostream>
#include <string>
using namespace std;

//creates a class with logic gate
//that returns label and boolean val

class LogicGate {
    public:
        LogicGate(string n) {
            label = n;
        }
        string getLabel(){
            return label;
        }
        bool getOutput(){
            output = performGateLogic();
            return output;
        }
        virtual bool performGateLogic(){
            cout << "ERROR! performGateLogic BASE" << '\n';
            return false; 
        }

        virtual void setNextPin(bool source) {
            cout << "ERROR! setNextPin BASE" << '\n';
        }
    private:
        string label;
        bool output;
};

int main()
{
    return 0;
}