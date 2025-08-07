#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n, ans = 0;
    cin >> x >> n;
    for (int i = 0; i < n; i++)
    {
        if (x != 6 && x != 7)
            ans += 250;
        ++x;
        if (x == 8)
            x = 1;
    }

    cout << ans;

    return 0;
}