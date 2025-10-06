#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m = 0;
    cin >> n;
    if (n >= 200 && n <= 299)
    {
        m = n + 50;
    }
    else if (n >= 300 && n <= 499)
    {
        m = n + 100;
    }
    else if (n >= 500)
    {
        m = n + 200;
    }
    else
    {
        m = n;
    }
    cout << m << endl;

    return 0;
}