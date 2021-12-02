//hash tables, double hash
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
  unordered_map<string, string> spnumbers;

  spnumbers = { {"one", "uno"}, {"two", "dos"} };
  spnumbers["three"] = "tres";
  spnumbers["four"] = "cuatro";

  cout << "one is ";
  cout << spnumbers["one"] << endl;

  cout <<spnumbers.size() << endl;
    
  return 0;
}
