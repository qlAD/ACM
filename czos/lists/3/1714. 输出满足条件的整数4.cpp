#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, a, b, c;
    cin >> n;

    for (int i = 2; i <= n; i = i + 2)
    {
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;

        if (a == 3 || b == 3 || c == 3 || a == 5 || b == 5 || c == 5)
            cout << i << "\n";
    }

    return 0;
}