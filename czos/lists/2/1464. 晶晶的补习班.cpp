#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e, f, g, mx, mn;
    double h;
    cin >> a >> b >> c >> d >> e >> f >> g;
    h = (a + b + c + d + e + f + g) / 7.0;
    mx = max({a, b, c, d, e, f, g});
    mn = min({a, b, c, d, e, f, g});
    printf("%.1f %d %d", h, mx, mn);

    return 0;
}