#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        int cnt = 1;
        for (int i = 2; i <= n; i++)
        {
            int price = arr[i];
            if (i == 2)
            {
                if (price < arr[i - 1])
                    cnt++;
            }
            else if (i == 3)
            {
                if (price < arr[i - 1] && price < arr[i - 2])
                    cnt++;
            }
            else if (i == 4)
            {
                if (price < arr[i - 1] && price < arr[i - 2] && price < arr[i - 3])
                    cnt++;
            }
            else if (i == 5)
            {
                if (price < arr[i - 1] && price < arr[i - 2] && price < arr[i - 3] && price < arr[i - 4])
                    cnt++;
            }
            else
            {
                if (price < arr[i - 1] && price < arr[i - 2] && price < arr[i - 3] && price < arr[i - 4] &&
                    price < arr[i - 5])
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}