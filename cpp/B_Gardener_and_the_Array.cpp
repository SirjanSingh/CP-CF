#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define fr(i, x, y) for (int i = x; i > y; i--)
#define int long long
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
    _print(p.x);
    cout << ',';
    _print(p.y);
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

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> a(n);
        // int b[n];
        mapii mp;
        mapii mp1;
        int flag = 0;
        f(i, 0, n)
        {
            int temp;
            cin >> temp;
            flag = 0;

            f(j, 0, temp)
            {
                int tmp;
                cin >> tmp;
                a[i].push_back(tmp);
                // tmp = a[i][j];
                // if (mp1[tmp] - mp[tmp] > 0)
                // {
                //     flag = 1;
                // }
                // else
                // {
                //     mp1[tmp]++;
                //     mp[tmp]++;
                // }
                mp[tmp]++;
            }

            // mp = {};
        }
        // if (flag != -1)
        int cnt = 0;
        for (auto i : a)
        {
            if (flag != -1)
            {
                flag = 0;
                for (auto j : i)
                {

                    if (mp[j] == 1)
                    {
                        flag = 1;
                        // cnt++;
                        break;
                    }
                }
                if (flag == 0)
                {
                    flag = -1;
                }
            }
            // cout << flag << ' ';
        }
        // if (flag == 0)
        //     flag = -1;
        // cout << cnt << ' ';
        if (flag != -1)
            no;
        else
            yes;
        // _print(mp);
        // nl;
    }
    return 0;
}