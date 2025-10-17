#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    for (int i = 100; i <= 999; i++)
    {
        int a = i / 100;
        int b = i / 10 % 10;
        int c = i % 10;

        if (a * a * a + b * b * b + c * c * c == i)
        {
            cout << i << "\n";
        }
    }

    return 0;
}