#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, a, b, c, total;
    cin >> n >> a >> b >> c;
    total = a + b + c;

    if (total <= n)
        cout << n - total << " YES" << endl;
    else
        cout << total - n << " NO" << endl;

    return 0;
}