#include <iostream>

using namespace std;

int main()
{
   int v { 5 };
   int* ptr { &v }; // initiailize ptr with address of variable v
   

   cout << &v << '\n'; // print the adress of variable v
   cout << ptr << '\n';// print the adress that ptr is holding

   return 0;

}