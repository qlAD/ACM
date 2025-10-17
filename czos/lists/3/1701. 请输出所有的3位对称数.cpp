#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a, b;
    for (int i = 100; i <= 999; i++)
    {
        a = i / 100;
        b = i % 10;
        if (a == b)
            cout << i << endl;
    }

    return 0;
}