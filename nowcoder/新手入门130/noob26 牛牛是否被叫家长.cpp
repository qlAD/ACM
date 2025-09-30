#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int avg = (a + b + c) / 3;

    if (avg < 60)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}