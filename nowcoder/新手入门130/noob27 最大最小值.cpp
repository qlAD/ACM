#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int MAX = max({a, b, c});
    int MIN = min({a, b, c});

    cout << "The maximum number is : " << MAX << endl;
    cout << "The minimum number is : " << MIN;

    return 0;
}