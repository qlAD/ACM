#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[14];
    cin >> s;

    int sum = 0, cnt = 1;
    for (int i = 0; i < 11; i++)
    {
        if (s[i] == '-')
        {
            continue;
        }
        sum += (s[i] - '0') * cnt++;
    }

    char x = (sum % 11 == 10) ? 'X' : (sum % 11 + '0');

    if (s[12] == x)
    {
        cout << "Right";
    }
    else
    {
        s[12] = x;
        cout << s;
    }

    return 0;
}