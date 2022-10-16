#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int a1, a2, a3, b1, b2, b3;
        int d, c;
        cin >> d >> c;
        cin >> a1 >> a2 >> a3;
        cin >> b1 >> b2 >> b3;
        int a = a1 + a2 + a3;
        int b = b1 + b2 + b3;
        int v1 = a + b + 2 * d;
        int v2 = a + b + c;
        if (a < 150)
            v2 += d;
        if (b < 150)
            v2 += d;
        if (v2 < v1)
            cout << "\nYes";
        else
            cout << "\nNo";
    }
    return 0;
}
