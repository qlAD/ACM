#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    for (int i = 1000; i <= 9999; i++)
    {
        int a = i / 1000;
        int b = i / 100 % 10;
        int c = i / 10 % 10;
        int d = i % 10;

        if ((a + b) % 2 == 0 && (c + d) % 2 != 0 && (a + b) > (c + d) && i % 8 == 0)
            cout << i << "\n";
    }

    return 0;
}