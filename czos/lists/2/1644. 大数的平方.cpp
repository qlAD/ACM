#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int a, b, mx;
    cin >> a >> b;

    if (a > b)
        mx = a;
    else
        mx = b;

    cout << pow(mx, 2) << endl;

    return 0;
}