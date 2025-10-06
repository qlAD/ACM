#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, mx, mn;
    cin >> n;
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    mx = max({a, b, c});
    mn = min({a, b, c});
    cout << mx - mn << endl;
    return 0;
}