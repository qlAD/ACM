#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int a, b;
    for (int i = 10; i <= 99; i++)
    {
        a = i / 10;
        b = i % 10;

        if (a == 2 || b == 2)
            cout << i << "\n";
    }

    return 0;
}