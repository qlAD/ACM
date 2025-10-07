#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    if (n > 100) cout << (n - 100) + 200 << endl;
    else cout << n * 2 << endl;

    return 0;
}