//C++ program to sort a binary array in one pass
#include <iostream>
using namespace std;

void segregate0and1(int arr[], int size)
{
  int left  = 0;
  int right = size-1;

  while (left < right)
    {
      //increment left index while we see 0 at left
      while (arr[left] == 0 && left < right)
	left++;
    }
}

int main()
{
  int arr[] = {0, 1, 0, 1, 1, 1};
  int i, arr_size = sizeof(arr)/sizeof(arr[0]);
  
  return 0;
}
