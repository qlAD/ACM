#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, d;
    cin >> n;
    a = (n / 1000 + 5) % 10;
    b = (n / 100 % 10 + 5) % 10;
    c = (n / 10 % 10 + 5) % 10;
    d = (n % 10 + 5) % 10;

    cout << d << c << b << a;

    return 0;
}