#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << fixed << setprecision(2) << 1.0 * (n / 100 + n / 10 % 10) / (n / 10 % 10 + n % 10);
    
    return 0;
}
