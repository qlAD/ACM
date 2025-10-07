#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int a, b;
    cin >> a >> b;

    if (a == b)
        cout << "Y\n";
    else
        cout << "N\n";

    cout << a * b << "\n";

    return 0;
}