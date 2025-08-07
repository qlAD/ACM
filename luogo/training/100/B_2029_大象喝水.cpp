#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, r;
    double pi = 3.14;
    cin >> h >> r;

    double v_cm3 = pi * r * r * h;
    double v_l = v_cm3 / 1000;

    cout << ceil(20 / v_l) << endl;

    return 0;
}