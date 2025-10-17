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
        int a = i % 10;
        if (a == 5 || a == 8)
            cout << i << "\n";
    }

    return 0;
}