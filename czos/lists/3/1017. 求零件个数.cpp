#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    for (int i = 100; i < 200; i++)
    {
        if (i % 3 == 2 && i % 5 == 3 && i % 7 == 5)
        {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}