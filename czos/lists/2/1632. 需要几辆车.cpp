#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    if (n % 30 == 0)
    {
        m = n / 30;
    }
    else
    {
        m = (n + 29) / 30;
    }
    cout << m << endl;
    return 0;
}