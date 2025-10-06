#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;
    a = n / 10;
    b = n % 10;
    if (a > b)
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }
    return 0;
}