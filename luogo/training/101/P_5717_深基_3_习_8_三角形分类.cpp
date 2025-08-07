#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int MIN = min({a, b, c});
    int MAX = max({a, b, c});
    int CEN = a + b + c - MIN - MAX;

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "Not triangle";
        return 0;
    }

    if (MIN * MIN + CEN * CEN > MAX * MAX)
    {
        cout << "Acute triangle" << endl;
    }
    else if (MIN * MIN + CEN * CEN == MAX * MAX)
    {
        cout << "Right triangle" << endl;
    }
    else if (MIN * MIN + CEN * CEN < MAX * MAX)
    {
        cout << "Obtuse triangle" << endl;
    }

    if (MIN == MAX || MIN == CEN || MAX == CEN)
    {
        cout << "Isosceles triangle" << endl;
    }
    if (MIN == CEN && CEN == MAX)
    {
        cout << "Equilateral triangle" << endl;
    }

    return 0;
}