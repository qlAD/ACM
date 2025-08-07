#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a1, b1, a2, b2, a3, b3;
    cin >> n >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    int a = ceil(1.0 * n / a1) * b1;
    int b = ceil(1.0 * n / a2) * b2;
    int c = ceil(1.0 * n / a3) * b3;

    cout << min({a, b, c});

    return 0;
}