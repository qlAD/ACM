#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c, p;
    cin >> a >> b >> c;

    p = (a + b + c) / 2.0;
    cout << fixed << setprecision(1) << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;

    return 0;
}