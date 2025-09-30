#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int a = num % 10;
    int b = num / 10 % 10;
    int m = b * 10 + a;

    if (m >= 3 && m <= 5)
    {
        cout << "spring";
    }
    else if (m >= 6 && m <= 8)
    {
        cout << "summer";
    }
    else if (m >= 9 && m <= 11)
    {
        cout << "autumn";
    }
    else
    {
        cout << "winter";
    }

    return 0;
}