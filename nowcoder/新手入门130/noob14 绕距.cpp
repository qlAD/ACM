#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    double d_e, d_m, detla;
    cin >> x1 >> y1 >> x2 >> y2;
    d_e = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    d_m = abs(x1 - x2) + abs(y1 - y2);
    detla = abs(d_m - d_e);
    cout << fixed << setprecision(6) << detla;

    return 0;
}