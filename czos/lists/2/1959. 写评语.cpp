#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int s;
    cin >> s;

    if (s >= 90)
        cout << "Excellent\n";
    else if (s >= 80)
        cout << "Good\n";
    else if (s >= 60)
        cout << "Pass\n";
    else
        cout << "Fail\n";

    return 0;
}