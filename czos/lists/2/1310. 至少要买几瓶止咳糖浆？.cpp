#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age, x;
    cin >> age;
    if (age > 10)
    {
        x = 25 * 3 * 5;
    }
    else if (age >= 7 && age <= 10)
    {
        x = 15 * 3 * 5;
    }
    else
    {
        x = 5 * 3 * 5;
    }
    cout << (x + 119) / 120 << endl;
    return 0;
}