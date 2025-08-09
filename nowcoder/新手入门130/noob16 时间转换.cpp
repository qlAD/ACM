#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, s, m, h;
    cin >> x;
    h = x / 3600;
    m = (x - h * 3600) / 60;
    s = x - h * 3600 - m * 60;

    cout << h << " " << m << " " << s;

    return 0;
}