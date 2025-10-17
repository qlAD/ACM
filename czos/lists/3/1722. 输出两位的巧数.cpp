#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    for (int i = 10;i <= 99;i++)
    {
        int a = i / 10;
        int b = i % 10;

        if ((a + b) + (a * b) == i){
            cout << i << "\n";
        }
    }

    return 0;
}