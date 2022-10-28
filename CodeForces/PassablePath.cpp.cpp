

#include <bits/stdc++.h>
#include <chrono>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std::chrono;
using namespace std;

#define ff first
#define ss second
#define int long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define modm 1000000007 // this is a prime number
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define fd(i, a, b) for (int i = a; i > b; i--)
#define fde(i, a, b) for (int i = a; i >= b; i--)
#define f(i, a, b) for (int i = a; i < b; i++)
#define fe(i, a, b) for (int i = a; i <= b; i++)
#define input(x) \
    int x;       \
    cin >> x;
#define PI 3.141592653589793238462
#define all(x) (x).begin(), (x).end()
#define endl "\n"
#define el "\n"
#define triplet pair<int, pair<int, int>>
#define prDouble(x) cout << fixed << setprecision(10) << x
#define FastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define debug(x) cerr << x << el;
#define set_bits __builtin_popcountll

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

// Custom hash map
struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

// for map<pair<int,int>,int>
struct HASH
{
    size_t operator()(const pair<int, int> &x) const
    {
        return hash<long long>()(((long long)x.first) ^ (((long long)x.second) << 32));
    }
};

// Operator overloads
template <typename T1, typename T2> // Key should be integer type
using safe_map = unordered_map<T1, T2, custom_hash>;
template <typename T1, typename T2> // cin >> pair<T1, T2>
istream &operator>>(istream &istream, pair<T1, T2> &p)
{
    return (istream >> p.first >> p.second);
}
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
    {
        cin >> it;
    }
    return istream;
}
template <typename T, typename V> // cin >> vector<pair<T,V>>
istream &operator>>(istream &istream, vector<pair<T, V>> &v)
{
    for (auto &it : v)
    {
        cin >> it.ff >> it.ss;
    }
    return istream;
}

template <class T>
void _print(T t) { cerr << t << "\n"; }
template <class T>
void _print(vector<T> v)
{
    cerr << "{";
    for (auto x : v)
    {
        cerr << x << " ";
    }
    cerr << "}";
}
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void print(T &&t) { cout << t; }
template <class T>
void print(vector<T> v)
{
    for (auto x : v)
    {
        print(x);
        print(" ");
    }
}
template <class T, class V>
void print(pair<T, V> v)
{
    print(v.ff);
    print(" ");
    print(v.ss);
    ;
}
template <class T, class V>
void print(vector<pair<T, V>> v)
{
    for (auto x : v)
    {
        print(x);
    }
}
template <typename T, typename... Args>
void print(T &&t, Args &&...args)
{
    print(t);
    ;
    print(forward<Args>(args)...);
}
//-------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
} // time complexity:O(log(max(a,b)))
vector<int> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<int> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
long long expo(int base, int exp, int mod)
{
    int x = 1;
    int i;
    int power = base % mod;
    for (i = 0; i < sizeof(int) * 8; i++)
    {
        int least_sig_bit = 0x00000001 & (exp >> i);
        if (least_sig_bit)
        {
            x = (x * power) % mod;
        }
        power = (power * power) % mod;
    }
    return x;
}
int inv(int a, int b) { return expo(a, b - 2, b); }
int mod_add(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
int mod_mul(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
int mod_sub(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
int mod_div(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, inv(b, m), m) + m) % m;
} // only for prime m
//-------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------

const int N = 200005;
vi adj[N];
int timer = 0;
int st[N], endd[N];
unordered_map<int, int> vis;

void dfs(int node)
{
    vis[node] = 1;
    st[node] = timer++;
    for (auto x : adj[node])
    {
        if (!vis[x])
        {
            dfs(x);
        }
    }
    endd[node] = timer++;
}
int n;
void preprocess()
{
    vis.clear();
    f(i, 1, n + 1)
    {
        st[i] = 0;
        endd[i] = 0;
    }
}
int32_t main()
{
    FastIO;
    cin >> n;
    f(i, 1, n)
    {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    int root = 1;
    w(q)
    {
        int k;
        cin >> k;
        vi p(k);
        int nk = 0;
        preprocess();
        timer = 0;
        dfs(root);
        int mx = 1e18, leaf;
        f(i, 0, k)
        {

            cin >> p[i];
            if (endd[p[i]] < mx)
            {
                leaf = p[i];
                mx = endd[p[i]];
            }
        }
        preprocess();

        timer = 0;
        dfs(leaf);
        vector<pii> b(k);
        f(i, 0, k)
        {
            b[i].ff = st[p[i]];
            b[i].ss = p[i];
        }
        sort(all(b));
        mx = endd[b[0].ss];
        int flag = 0;
        f(i, 1, k)
        {
            if (endd[b[i].ss] <= mx)
            {
                mx = endd[b[i].ss];
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}

// Problem link:https://codeforces.com/contest/1702/problem/G1
