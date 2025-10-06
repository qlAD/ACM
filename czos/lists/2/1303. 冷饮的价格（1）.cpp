// n = int(input())

// if n >= 10:
//     print(f"{n * 2:.1f}")
// else:
//     print(f"{n * 2.2:.1f}")

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double p;

    if (n >= 10)
    {
        p = 2 * n;
    }
    else
    {
        p = 2.2 * n;
    }

    printf("%.1f", p);

    return 0;
}