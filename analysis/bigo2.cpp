#include <iostream>
using namespace std;



int main()
{
  int input[100], count, i, min;

  cout << "Enter a number of elements in array\n";
  cin >> count;

  cout << "Enter " << count << " numbers \n";

  // read array elements
  for (i = 0; i < count; i++){
    cin >> input[i];
  }

  min = input[0];
  // search num in inputArray from index 0 to elementCount
  for (i=0; i < count; i++){
    if(input[i] < min){
      min = input[i];
    }  
  }

  cout << "Minimum element\n" << min << '\n';
  return 0;
}
