#include <iostream>
using namespace std;

//swap_values() functon defintion
//interchanges the values located by variable1 and variable2

void swap_values(int &variable1, int &variable2){
    int temp;

    temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

int main()
{
    int first_num, second_num;
    first_num = 7;
    second_num = 8;

    cout << "Two num before swap: 1 -> " << first_num << '\n' << "2 -> " << second_num << '\n';
    swap_values(first_num, second_num);
    cout << "The numbers after swap function: 1 -> " << first_num << '\n' << "2 -> " << second_num << '\n';
    
    return 0;
}