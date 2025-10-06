#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 90)
    {
        cout << n * 3 << endl;
    }
    else if (80 <= n < 90)
    {
        cout << n * 2 << endl;
    }
    else if (70 <= n < 80)
    {
        cout << n << endl;
    }
    else
    {
        cout << 50 << endl;
    }

    return 0;
}