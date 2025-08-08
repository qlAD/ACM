#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << fixed << setprecision(1) << n / 10 * 1.0 / (n % 10);

    return 0;
}