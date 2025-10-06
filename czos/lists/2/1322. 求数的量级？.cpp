#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n / 1000000000 != 0)
    {
        cout << "shi yi" << endl;
    }
    else if (n / 100000000 != 0)
    {
        cout << "yi" << endl;
    }
    else if (n / 10000000 != 0)
    {
        cout << "qian wan" << endl;
    }
    else if (n / 1000000 != 0)
    {
        cout << "bai wan" << endl;
    }
    else if (n / 100000 != 0)
    {
        cout << "shi wan" << endl;
    }
    else
    {
        cout << "wan" << endl;
    }
    return 0;
}