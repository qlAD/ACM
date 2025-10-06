#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;
    if (n >= 92.8)
    {
        cout << "jin" << endl;
    }
    else if (n >= 85.6 && n < 92.8)
    {
        cout << "yin" << endl;
    }
    else if (n >= 82.1 && n < 85.6)
    {
        cout << "tong" << endl;
    }
    else
    {
        cout << "sorry" << endl;
    }
    return 0;
}