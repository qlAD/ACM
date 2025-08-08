#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n / 100 + n % 100 << endl
         << fixed << setprecision(1) << 1.0 * (n / 100) / (n % 100);
    return 0;
}