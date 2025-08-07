#include <bits/stdc++.h>
using namespace std;

int main()
{
    double s, v, t, t2;
    cin >> s >> v;

    t = 24 * 60 + 8 * 60;
    t2 = ceil(s / v) + 10;
    t -= t2;

    if (t >= 24 * 60)
    {
        t -= 24 * 60;
    }

    int h, m;
    h = (int)t / 60;
    m = (int)t % 60;

    if (h < 10)
    {
        if (m < 10)
        {
            cout << "0" << h << ":0" << m << endl;
        }
        else
        {
            cout << "0" << h << ":" << m << endl;
        }
    }
    else
    {
        if (m < 10)
        {
            cout << h << ":0" << m << endl;
        }
        else
        {
            cout << h << ":" << m << endl;
        }
    }

    return 0;
}