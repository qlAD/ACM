#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    double y;

    if (x <= 150)
    {
        y = x * 0.4463;
        cout << fixed << setprecision(1) << y;
    }
    else if (x >= 151 && x <= 400)
    {
        y = 150 * 0.4463 + (x - 150) * 0.4663;
        cout << fixed << setprecision(1) << y;
    }
    else if (x >= 401)
    {
        y = 150 * 0.4463 + 250 * 0.4663 + (x - 400) * 0.5663;
        cout << fixed << setprecision(1) << y;
    }

    return 0;
}