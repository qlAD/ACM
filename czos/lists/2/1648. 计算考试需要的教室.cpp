#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int m, n;
    cin >> m >> n;

    if (m % n == 0)
        cout << m / n << endl;
    else
        cout << m / n + 1 << endl;

    return 0;
}