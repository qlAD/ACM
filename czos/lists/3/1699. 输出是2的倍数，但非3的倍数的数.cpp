#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0 && i % 3 != 0)
            cout << i << "\n";
    }

    return 0;
}