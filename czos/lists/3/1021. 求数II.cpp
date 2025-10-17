#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    for (int i = 1; i <= 500; i++)
    {
        if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
        {
            cout << i << "\n";
        }
    }

    return 0;
}