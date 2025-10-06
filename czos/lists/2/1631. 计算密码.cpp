#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, d, m;
    cin >> n;
    a = n / 1000;
    b = n / 100 % 10;
    c = n / 10 % 10;
    d = n % 10;
    m = b * 100 + c * 10 + d;
    if (a > m)
    {
        cout << n << endl;
    }
    else
    {
        cout << m * 1000 + a << endl;
    }

    return 0;
}