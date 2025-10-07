#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int age, weight, height;
    cin >> age >> weight >> height;

    if (age >= 16 && age <= 19 && weight >= 50 && weight <= 80 && height >= 165 && height <= 185)
        cout << "Y\n";
    else
        cout << "N\n";

    return 0;
}