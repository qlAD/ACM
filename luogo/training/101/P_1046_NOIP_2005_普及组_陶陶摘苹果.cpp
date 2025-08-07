#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h[10], H, n = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> h[i];
    }

    cin >> H;
    H += 30;

    for (int i = 0; i < 10; i++)
    {
        if (H >= h[i])
        {
            n += 1;
        }
    }

    cout << n;

    return 0;
}