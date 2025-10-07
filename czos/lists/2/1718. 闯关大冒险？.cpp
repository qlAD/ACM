#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, a, b, c, d, mx;
    cin >> n;

    a = n / 1000;
    b = n / 100 % 10;
    c = n / 10 % 10;
    d = n % 10;

    mx = max(max(a, b), max(c, d));
    cout << mx << "\n";

    return 0;
}