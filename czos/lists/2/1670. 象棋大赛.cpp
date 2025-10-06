#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 15 && n <= 30)
    {
        cout << "qingnianzu" << endl;
    }
    else if (n >= 11 && n <= 14)
    {
        cout << "shaonianzu" << endl;
    }
    else if (n >= 8 && n <= 10)
    {
        cout << "ertongzu" << endl;
    }
    return 0;
}