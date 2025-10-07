#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n;
    cin >> n;
    double p;

    if (n == 1)
        p = 5.0;
    else if (n >= 2 && n <= 5)
        p = 4.5 * n;
    else if (n >= 6 && n <= 10)
        p = 4.0 * n;
    else
        p = 3.5 * n;

    cout << fixed << setprecision(1) << p << "\n";

    return 0;
}