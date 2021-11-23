#include <bits/stdc++.h>

using namespace std;

int main()
{
    double batteryLifeInHours[3]{}; // allocate 3 doubles
    batteryLifeInHours[0] = 2.0;
    batteryLifeInHours[1] = 3.0;
    batteryLifeInHours[2] = 4.3;

    cout << "The average battery life is " << (batteryLifeInHours[0] + batteryLifeInHours[1]
        + batteryLifeInHours[2]) / 3.0 << " hour(s)\n";

    return 0;
}