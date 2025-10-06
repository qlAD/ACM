#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 10)
        cout << "A" << endl;
    else if (10 <= n < 20)
        cout << "B" << endl;
    else if (20 <= n < 40)
        cout << "C" << endl;
    else if (40 <= n <= 50)
        cout << "D" << endl;
    else
        cout << "E" << endl;

    return 0;
}