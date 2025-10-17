#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 取消同步流
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    for (int i = 1; i <= 999; i++)
    {
        int temp = i;
        bool have_5 = false;
        while (temp > 0)
        {
            if (temp % 10 == 5)
            {
                have_5 = true;
                break;
            }
            temp = temp / 10;
        }
        if (have_5 and i % 3 == 0)
            cout << i << "\n";
        
    }
    return 0;
}