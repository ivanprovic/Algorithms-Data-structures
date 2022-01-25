/* c++ code to segregate 0s and 1s in an array
You are given an array of 0s and 1s in random order. Segregate 0s on left side and 1s on right
side of the array [Basically you have to sort the array]. Traverse array only once. 
time complexity 0(n)
This method traverses array two times, not great not terrible solution.
*/

#include <iostream>
using namespace std;

void segregate0and1(int arr[], int n)
{
  int count = 0; //counts the no of zeros in array

  for (int i = 0; i < n; i++) {
    if (arr [i] == 0)
      count++;
  }

  //loop fills the arr with 0 until count
  for (int i = 0; i < count; i++)
    arr[i] = 0;

  //loop fills remaining arr space with 1
  for (int i = count; i < n; i++)
    arr[i] = 1;
}

void print(int arr[], int n)
{
  cout << "Array after segregation is: ";

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}

int main()
{
  int arr[] = {0, 1, 0, 1, 1, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  segregate0and1(arr, n);
  print (arr, n);
 
  return 0;
}
