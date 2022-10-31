#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define f(i, a, b) for (int i = a; i < b; i++)
#define fastio                   \
    ios_base::sync_with_stdio(); \
    cin.tie(0);                  \
    cout.tie(0);
using ll = long long;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
int m;
vector<int> p;
const int N = 1e6 + 4;
int min_segTree[N], max_segTree[N];
void build(int ind = 1, int st = 0, int endd = -1)
{
    if (endd == -1)
    {
        endd = m - 1;
    }
    if (st == endd)
    {
        max_segTree[ind] = min_segTree[ind] = p[st];
        return;
    }
    int mid = (st + endd) >> 1;
    build(ind << 1, st, mid);
    build(ind << 1 | 1, mid + 1, endd);
    min_segTree[ind] = min(min_segTree[ind << 1], min_segTree[ind << 1 | 1]);
    max_segTree[ind] = max(max_segTree[ind << 1], max_segTree[ind << 1 | 1]);
    return;
}
int getMin(int l, int r, int ind = 1, int st = 0, int endd = -1)
{
    if (endd == -1)
    {
        endd = m - 1;
    }
    if (endd < l or st > r)
    {
        return INT_MAX;
    }
    else if (st >= l && endd <= r)
    {
        return min_segTree[ind];
    }
    int mid = (st + endd) >> 1;
    return min(getMin(l, r, ind << 1, st, mid), getMin(l, r, ind << 1 | 1, mid + 1, endd));
}
int getMax(int l, int r, int ind = 1, int st = 0, int endd = -1)
{
    if (endd == -1)
    {
        endd = m - 1;
    }
    if (endd < l or st > r)
    {
        return INT_MIN;
    }
    else if (st >= l && endd <= r)
    {
        return max_segTree[ind];
    }

    int mid = (st + endd) >> 1;
    return max(getMax(l, r, ind << 1, st, mid), getMax(l, r, ind << 1 | 1, mid + 1, endd));
}
int solve(int i, int j)
{
    int mid = (i + j) >> 1;

    if (i == j)
    {
        return 0;
    }
    if ((j - i) == 1)
    {
        return (p[i] <= p[j] ? 0 : 1);
    }
    int min1 = getMin(i, mid), max1 = getMax(i, mid);
    int min2 = getMin(mid + 1, j), max2 = getMax(mid + 1, j);
    if (max1 > min2 and max1 <= max2)
    {
        return (-1);
    }
    else if (min1 >= min2 && min1 < max2)
    {
        return -1;
    }
    if (max2 > min1 and max2 <= max1)
    {
        return (-1);
    }
    else if (min2 >= min1 && min2 < max1)
    {
        return -1;
    }
    if (max1 <= min2)
    {
        int a = solve(i, mid), b = solve(mid + 1, j);
        if (a == -1 or b == -1)
        {
            return -1;
        }
        else
        {
            return a + b;
        }
    }

    else
    {
        int a = solve(i, mid), b = solve(mid + 1, j);
        if (a == -1 or b == -1)
        {
            return -1;
        }
        else
        {
            return 1 + a + b;
        }
    }
}

int32_t main()
{

    w(t)
    {
        cin >> m;
        // for (int i = 0; i <= 4 * m; i++)
        // {
        // 	min_segTree[i] = INT_MAX;
        // 	max_segTree[i] = 0;
        // }
        p.resize(m);
        f(i, 0, m) { cin >> p[i]; }
        build();
        // cout << getMax(0, m - 1) << "\n";
        cout << solve(0, m - 1) << "\n";
    }
    return 0;
}