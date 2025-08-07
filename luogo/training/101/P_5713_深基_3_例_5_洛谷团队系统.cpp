#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (5 * n < 11 + 3 * n)
        cout << "Local";
    else
        cout << "Luogu";

    return 0;
}