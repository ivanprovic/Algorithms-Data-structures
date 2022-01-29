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

      //decrement right index while we see 1 at right
      while (arr[right] == 1 && left < right)
	right--;

      /* if left is smaller than right then there is a 1 at left and a 0
	 at right. Exchange arr[left] and arr [right] */
      if (left < right)
	{
	  arr[left] = 0;
	  arr[right] = 1;
	  left++;
	  right--;
	}
    }
}

int main()
{
  int arr[] = {0, 1, 0, 1, 1, 1};
  int i, arr_size = sizeof(arr)/sizeof(arr[0]);

  segregate0and1(arr, arr_size);

  cout << "Array after segregation ";
  for (i = 0; i < 6; i++)
     cout << arr[i] << " ";
  return 0;
}
