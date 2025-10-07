#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    if (n == 1 || n == 3 || n == 5 || n == 6)
        cout << "youke\n";
    else
        cout << "meike\n";

    return 0;
}