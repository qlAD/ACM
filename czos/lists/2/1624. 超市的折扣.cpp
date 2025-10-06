#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, s, p;
    cin >> a >> b >> c;
    s = a + b + c;
    if (s >= 200)
    {
        p = s * 0.8;
    }
    else
    {
        p = s * 0.9;
    }
    printf("%.1f\n", p);
    return 0;
}
