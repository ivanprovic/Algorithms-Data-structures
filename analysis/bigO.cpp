#include <iostream>
using namespace std;

//this doesn't do anything
int main(){
    int a=5;
    int b=6;
    int c=10;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            int x = i * i;
            int y = j * j;
            int z = i * j;
        }
    }

    for (int k = 0; k < n; k++){
        int w = a*k + 45;
        int v = b*b;
    }
    int d = 33;
    return 0;
}

/* 
The number of assignment operations is the sum of four terms.
The first term is the constant 3, representing the three assignment
statements at the start of the fragment. The second term is 3n2, since
there are three statements that are performed n2 times due to the nested iteration.
The third term is 2n, two statements iterated n times.
Finally, the fourth term is the constant 1, representing the final assignment statement.
This gives us T(n)=3+3n2+2n+1=3n2+2n+4.
By looking at the exponents, we can easily see that the n2 term will be dominant
and therefore this fragment of code is O(n2).
Note that all of the other terms as well as the coefficient
on the dominant term can be ignored as n grows larger.
*/