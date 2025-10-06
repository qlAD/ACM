#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double p;

    if (n >= 30)
    {
        p = n * 1.0;
    }
    else if (20 <= n <= 29)
    {
        p = n * 1.2;
    }
    else if (10 <= n <= 19)
    {
        p = n * 1.5;
    }
    else
    {
        p = n * 1.8;
    }

    printf("%.1f", p);

    return 0;
}