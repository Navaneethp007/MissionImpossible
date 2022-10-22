#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

using ll = long long;
#define f(i, a, b) for (int i = a; i < b; ++i)
#define fastio                   \
    ios_base::sync_with_stdio(); \
    cin.tie(0);                  \
    cout.tie(0);
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)

const int MAXN = 105;
const int MAXC = 1e4;


struct point
{
    int x, y;
    void read()
    {
        cin >> x >> y;
    }
    void print()
    {
        cout << x << " " << y;
    }
    point(){};
    point(int x, int y) : x(x), y(y){};
    void operator=(const point &b)
    {
        x = b.x;
        y = b.y;
    }
    point operator+(const point &b) const
    {
        return point(x + b.x, y + b.y);
    }
    point operator-(const point &b) const
    {
        return point(x - b.x, y - b.y);
    }
    ll cross(const point &b) { return (ll)x * b.y - (ll)y * b.x; }
    void operator-=(const point &b)
    {
        x -= b.x;
        y -= b.y;
    }
    void operator*=(const int k)
    {
        x *= k;
        y *= k;
    }
    long long dot(const point &a)
    {
        return x * a.x + y * a.y;
    }
    long long operator*(const point &b) { return (long long)x * b.y - (long long)y * b.x; }
    long long cross(const point &a, const point &b) const
    {
        return (a - *this) * (b - *this);
    }
};

int orientation(point a, point b, point c)
{
    int t = b.cross(a, c);
    if (t > 0)
    {
        return -1; // cw
    }
    else if (t < 0)
    {
        return 1; // ccw
    }
    else
    {
        return 0; // onLine
    }
}

bool cw(const point &a, const point &b, point const &c)
{
    return orientation(a, b, c) == -1;
}

bool ccw(const point &a, const point &b, point const &c)
{
    return orientation(a, b, c) == 1;
}
bool onLine(const point &a, const point &b, const point &c)
{
    return orientation(a, b, c) == 0;
}



bool pointInsideLine(point pt, point a, point b)
{
    return orientation(a, pt, b) == 0 && ((min(a.x, b.x) <= pt.x && max(a.x, b.x) >= pt.x && min(a.y, b.y) <= pt.y && max(a.y, b.y) >= pt.y));
}


int area(point a, point b, point c)
{
    int a1 = (a.x * b.y) + (b.x * c.y) + (c.x * a.y);
    int a2 = (a.y * b.x) + (b.y * c.x) + (c.y * a.x);
    return (abs(a1 - a2));
}
bool pointInsideTriangle(point pt, point a, point b, point c)
{
    ll a1 = abs(area(pt, a, b));
    ll a2 = abs(area(pt, b, c));
    ll a3 = abs(area(pt, c, a));
    ll a4 = abs(area(a, b, c));
    return ((a1 + a2 + a3) == a4);
}


int n, m;
point red[MAXN], black[MAXN * 30]; // assume every point is >= (0, 0)
int f[MAXC][MAXC];                 // number of blackpoint inside redi, redj, zero

int main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> n >> m;
    f(i, 0, n)
    {
        red[i].read();
        red[i] = red[i] + point(MAXC, MAXC);
    }
    f(i, 0, m)
    {
        black[i].read();
        black[i] = black[i] + point(MAXC, MAXC);
    }

    point zero = point(0, 0);

    f(i, 0, n)
        f(j, 0, n)
    {
        if (cw(red[i], red[j], zero))
        {
            f[i][j] = 0;
            f(pt, 0, m)
            {
                if (pointInsideLine(black[pt], red[i], red[j]))
                {
                    continue;
                }
                if (pointInsideTriangle(black[pt], red[i], red[j], zero))
                {
                    f[i][j]++;
                }
            }
            f[j][i] = -f[i][j];
        }
    }

    w(q)
    {
        int k;
        cin >> k;
        vector<int> curr_pts;
        f(i, 0, k)
        {
            int x;
            cin >> x;
            curr_pts.push_back(x - 1);
        }
        curr_pts.push_back(curr_pts.front());
        int ans = 0;
        f(i, 0, k)
        {
            int j = i + 1;
            int x = curr_pts[i], y = curr_pts[j];
            ans += f[x][y];
        }
        cout << ans << "\n";
    }

    return 0;
}
