#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    if (n >= 60) cout << "pass!" << endl;
    else cout << "sorry!" << endl;

    return 0;
}