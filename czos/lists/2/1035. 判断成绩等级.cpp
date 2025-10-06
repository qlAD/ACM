#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 86)
    {
        cout << "VERY GOOD" << endl;
    }
    else if (60 <= n <= 85)
    {
        cout << "GOOD" << endl;
    }
    else
    {
        cout << "BAD" << endl;
    }

    return 0;
}