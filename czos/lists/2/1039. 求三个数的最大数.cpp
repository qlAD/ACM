#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (b > c)
        {
            cout << a << endl;
        }
        else if (c > a)
        {
            cout << c << endl;
        }
    }
    else
    {
        if (a > c)
        {
            cout << b << endl;
        }
        else if (c > b)
        {
            cout << c << endl;
        }
    }

    return 0;
}