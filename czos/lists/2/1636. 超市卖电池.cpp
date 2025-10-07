#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    if (n > 10)
        cout << fixed << setprecision(1) << n * 2 * 0.9 << endl;
    else
        cout << fixed << setprecision(1) << n * 2.0 << endl;

    return 0;
}