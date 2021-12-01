#include <iostream>
#include <vector>
using namespace std;

// first take on vectors
int main()
{
  vector <int> intvector;
  intvector.reserve(50);

  for (int i = 0; i<50; i++){
    intvector.push_back(i*i);
    cout << intvector[i] << '\n';
  }
  return 0;
}
