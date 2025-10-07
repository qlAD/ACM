#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    double a,b;
    cin >> a;

    if (a <= 20) b = a * 1.68;
    else b = a * 1.98;

    cout << fixed << setprecision(2) << b << "\n";

    return 0;
}