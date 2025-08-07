#include <bits/stdc++.h>
using namespace std;

int main()
{
    int max = 8, pos = 0;
    int a, b;

    for (int i = 1; i <= 7; i++)
    {
        cin >> a >> b;
        if (max < a + b)
        {
            max = a + b;
            pos = i;
        }
    }

    cout << pos;

    return 0;
}