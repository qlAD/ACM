#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age, a, b;
    cin >> age;
    a = age / 10;
    b = age % 10;
    if (a > b)
    {
        cout << age;
    }
    else
    {
        cout << b * 10 + a << endl;
    }

    return 0;
}