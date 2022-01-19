#include <iostream>
#include <ctime>
using namespace std;

int sumOfN3(int n) {
    clock_t begin = clock();
    int sum_n = (n*(n+1))/2;
    clock_t end = clock();
    double elapsed_secs = double(end - begin) /CLOCKS_PER_SEC;
    cout << fixed << '\n';
    cout << "Sum is " << sum_n << " required " << elapsed_secs << " seconds " << '\n';
    return sum_n;
}

int main()
{
    sumOfN3(10000);
    return 0;
}