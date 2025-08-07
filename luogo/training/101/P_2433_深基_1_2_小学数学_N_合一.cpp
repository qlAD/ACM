#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    switch (t)
    {
    case 1:
    {
        cout << "I love Luogu!" << endl;
        break;
    }
    case 2:
    {
        cout << 2 + 4 << " " << 10 - 2 - 4 << endl;
        break;
    }
    case 3:
    {
        int a = 14 / 4;
        cout << a << endl;
        cout << a * 4 << endl;
        cout << 14 - a * 4 << endl;
        break;
    }
    case 4:
    {
        cout << 500.0 / 3 << endl;
        break;
    }
    case 5:
    {
        cout << (260 + 220) / (12 + 20) << endl;
        break;
    }
    case 6:
    {
        double a = 6, b = 9;
        double c = sqrt(a * a + b * b);
        cout << c << endl;
        break;
    }
    case 7:
    {
        int a = 100;
        a += 10;
        cout << a << endl;
        a -= 20;
        cout << a << endl;
        a = 0;
        cout << a << endl;
        break;
    }
    case 8:
    {
        int r = 5;
        double pi = 3.141593;
        cout << pi * r * 2 << endl;
        cout << pi * r * r << endl;
        cout << pi * r * r * r * 4 / 3.0 << endl;
        break;
    }
    case 9:
    {
        int peaches = 1;
        peaches = (peaches + 1) * 2;
        peaches = (peaches + 1) * 2;
        peaches = (peaches + 1) * 2;
        cout << peaches << endl;
        break;
    }
    case 10:
    {
        cout << 9 << endl;
        break;
    }
    case 11:
    {
        cout << 100.0 / (8 - 5) << endl;
        break;
    }
    case 12:
    {
        cout << 'M' - 'A' + 1 << endl;
        cout << char('A' - 1 + 18) << endl;
        break;
    }
    case 13:
    {
        double pi = 3.141593;
        double v = 4 / 3.0 * pi * 4 * 4 * 4 + 4 / 3.0 * pi * 10 * 10 * 10;
        cout << static_cast<int>(cbrt(v)) << endl;
        break;
    }
    case 14:
    {
        int a = 1, b = -120, c = 3500;
        int delta = b * b - 4 * a * c;
        double sqrt_delta = sqrt(delta);
        double x1 = (-b + sqrt_delta) / (2 * a);
        double x2 = (-b - sqrt_delta) / (2 * a);
        int ans = min(x1, x2);
        cout << ans << endl;
        break;
    }
    }

    return 0;
}