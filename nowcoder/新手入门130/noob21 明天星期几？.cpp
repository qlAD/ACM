#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if (num >= 7)
    {
        num = 1;
    }
    else
    {
        num += 1;
    }

    cout << num << endl;

    return 0;
}