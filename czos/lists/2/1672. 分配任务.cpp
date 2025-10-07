#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int a, b, c;
    cin >> a >> b;
    c = a + b;

    if (c < 10)
        cout << "water\n";
    else if (a > b)
        cout << "tree\n";
    else
        cout << "tea\n";

    return 0;
}