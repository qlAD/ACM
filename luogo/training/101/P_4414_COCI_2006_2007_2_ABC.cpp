#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int v[3] = {a, b, c};
    sort(v, v + 3);

    char ord[4];
    cin >> ord;

    for (int i = 0; i < 3; ++i)
    {
        cout << v[ord[i] - 'A'] << (i == 2 ? '\n' : ' ');
    }

    return 0;
}