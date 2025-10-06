#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    double avg = (x + y + z) / 3.0;
    if (avg >= 90)
    {
        cout << "beijing" << endl;
    }
    else
    {
        cout << "nanjing" << endl;
    }

    return 0;
}