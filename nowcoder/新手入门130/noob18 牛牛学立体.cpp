#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << 2 * (a * b + b * c + a * c) << endl
         << a * b * c;
    return 0;
}