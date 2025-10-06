#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, d, e, f;
    cin >> n;
    a = n / 100000;
    b = n / 10000 % 10;
    c = n / 1000 % 10;
    d = n / 100 % 10;
    e = n / 10 % 10;
    f = n % 10;
    if (a == f && b == e && c == d)
    {
        cout << "Y" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}