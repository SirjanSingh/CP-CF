#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define fr(i, x, y) for (int i = x; i > y; i--)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(), vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int, int>
#define mapci map<char, int>
#define pii pair<int, int>
typedef unsigned long long ull;
void _print(int t) { cout << t; }
void _print(string t) { cout << t; }
void _print(char t) { cout << t; }
void _print(long double t) { cout << t; }
void _print(double t) { cout << t; }
void _print(ull t) { cout << t; }
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cout << '{';
    _print(p.ff);
    cout << ',';
    _print(p.ss);
    cout << '}';
}
template <class T>
void _print(vector<T> v)
{
    cout << '[';
    for (T i : v)
    {
        _print(i);
        cout << ' ';
    }
    cout << ']';
}
template <class T>
void _print(set<T> v)
{
    cout << '[';
    for (T i : v)
    {
        _print(i);
        cout << ' ';
    }
    cout << ']';
}
template <class T>
void _print(multiset<T> v)
{
    cout << ']';
    for (T i : v)
    {
        _print(i);
        cout << ' ';
    }
    cout << ']';
}
template <class T, class V>
void _print(map<T, V> v)
{
    cout << '[';
    for (auto i : v)
    {
        _print(i);
        cout << ' ';
    }
    cout << ']';
}
void _print(auto x) { cout << x; }

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> e(n, 0), o(n, 0);
    mapii me, mo, m;
    f(i, 0, n)
    {
        cin >> a[i];
        int temp = a[i];
        if (i % 2 == 0)
        {
            // e.push_back(a[i]);
            me[temp]++;
        }
        else
        {
            // o.push_back(temp);
            mo[temp]++;
        }
    }
    e[0] = a[0];
    o[0] = a[0];
    int sum = 0;
    f(i, 0, n  - 1)
    {
        if (a[i] == a[i + 1])
        {
            yes;
            return;
        }
    }
    m[0] =  1;
    f(i, 0, n)
    {
        a[i] *= (((i % 2 == 0) ? 1 : -1));
        sum += a[i];
        if (m[sum] > 0)
        {
            yes;
            return;
            // e[i] = e[i - 1] + a[i];
            // o[i] = o[i - 1];
            // else
            // {
            //     e[i] = e[i - 1];
            //     o[i] = o[i - 1] + a[i];
            // }
        }
            m[sum]++;
        // cout <<  sum << ' ' << a[i] << '\n' ;
    }
    no;
    // for(auto i : me){
    //     if(mo[i.x] != 0) {
    //         yes;
    //         return;
    //     }
    // }
    // for(auto i : mo){
    //     if(me[i.x] != 0) {
    //         yes;
    //         return;
    //     }
    // }

    // nl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}