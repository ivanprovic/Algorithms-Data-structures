#include <iostream>
using namespace std;

//adds the sum of (n + n-1 + n-2...)
int sumOfN(int n) {
    int theSum = 0;
    for (int i = 0; i < n+1; i++) {
        theSum = theSum + i;
    }
    return theSum;
}

int main(){
    //n is 10 (10 + 9 + 8)
    cout << sumOfN(10);
    return 0;
}