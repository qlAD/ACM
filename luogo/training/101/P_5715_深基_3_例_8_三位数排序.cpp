#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;

    int minn = min(a, min(b, c));
    int maxn = max(a, max(b, c));

    cout << minn << " " << sum - maxn - minn << " " << maxn;

    return 0;
}