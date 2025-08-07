#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d;

    int m_1 = a * 60 + b;
    int m_2 = c * 60 + d;
    int m = m_2 - m_1;

    e = m / 60;
    f = m % 60;

    cout << e << " " << f << endl;
    return 0;
}