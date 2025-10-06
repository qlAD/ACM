#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 10)
    {
        cout << n * 1.5 << endl;
    }
    else
    {
        cout << n * 1.2 << endl;
    }

    return 0;
}