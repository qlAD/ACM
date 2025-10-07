#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, a, b, c, d, e, f;
    cin >> n;

    a = n / 10000;
    b = n / 1000 % 10;
    c = n / 100 % 10;
    d = n / 10 % 10;
    e = n % 10;

    if (a == 5 || b == 5 || c == 5 || d == 5 || e == 5)
        cout << a + b + c + d + e << "\n";
    else
        cout << n << "\n";

    return 0;
}