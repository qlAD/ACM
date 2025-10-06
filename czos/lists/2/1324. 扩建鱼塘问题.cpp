#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    if (m > n)
    {
        cout << (m - n) * m << endl;
    }
    else
    {
        cout << (n - m) * n << endl;
    }

    return 0;
}