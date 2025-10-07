#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int y;
    cin >> y;

    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        cout << "yes\n";
    else
        cout << "no\n";

    return 0;
}