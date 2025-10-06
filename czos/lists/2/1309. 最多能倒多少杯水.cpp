#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, m;
    cin >> n >> x;
    m = (n * 1000 + x - 1) / x;
    cout << m << endl;
    return 0;
}