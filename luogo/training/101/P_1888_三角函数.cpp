#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int MIN = min({a, b, c});
    int MAX = max({a, b, c});
    cout << MIN / __gcd(MIN, MAX) << "/" << MAX / __gcd(MIN, MAX);

    return 0;
}