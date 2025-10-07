#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    double a, b;
    cin >> a >> b;

    if (a >= 60 && b < 60)
        cout << "green\n";
    else if (a < 60 && b >= 60)
        cout << "green\n";
    else
        cout << "red\n";

    return 0;
}