#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << 1.0 * n / 2 << endl;
    }
    else
    {
        cout << 3 * n + 1;
    }

    return 0;
}