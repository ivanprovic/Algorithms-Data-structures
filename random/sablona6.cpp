#include <iostream>
#include <vector>
using namespace std;

//access elements of a vector

int main()
{
  vector <int> num {1, 2, 3, 4, 5};

  cout << "Element at Index 0: " << num.at(0) << '\n';
  cout << "Element at Index 2: " << num.at(2) << '\n';
  cout << "Element at Index 4: " << num.at(4) << '\n';
  return 0;
}
