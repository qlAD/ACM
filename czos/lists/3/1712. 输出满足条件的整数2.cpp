#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int a, b, c;

    for (int i = 100; i <= 999; i++)
    {
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;

        if ((a + b + c) % 2 == 0 && a > b && b > c)
            cout << i << "\n";
    }

    return 0;
}