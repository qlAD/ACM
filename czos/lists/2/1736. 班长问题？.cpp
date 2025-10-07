#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int a, b, c, d, e, mx;
    cin >> a >> b >> c >> d >> e;
    mx = max(max(a, b), max(c, max(d, e)));
    cout << mx << "\n";

    return 0;
}