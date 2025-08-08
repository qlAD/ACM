#include <bits/stdc++.h>
using namespace std;

int main()
{
    const double pi = 3.14;
    double x, r;
    cin >> x;

    r = x / pi / 2.0;

    cout << fixed << setprecision(2) << pi * r * r;

    return 0;
}