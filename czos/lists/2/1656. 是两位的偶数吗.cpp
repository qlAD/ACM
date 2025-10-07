#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    if (10 <= n && n <= 99 && n % 2 == 0)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}