#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double m;
    cin >> n;
    if (n <= 10)
    {
        m = 2.5;
    }
    else
    {
        m = 2.5 + (n - 10) * 1.5;
    }
    printf("%.2f", m);
    return 0;
}