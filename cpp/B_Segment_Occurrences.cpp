
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

vector<int> computeLPS(string pattern)
{
    int n = pattern.length();
    vector<int> lps(n, 0);
    int len = 0;
    int i = 1;
    while (i < n)
    {
        if (pattern[i] == pattern[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

int KMP(string text, string pattern)
{
    int n = text.length();
    int m = pattern.length();
    vector<int> lps = computeLPS(pattern);
    int i = 0, j = 0;
    int count = 0;
    while (i < n)
    {
        if (pattern[j] == text[i])
        {
            j++;
            i++;
        }
        if (j == m)
        {
            count++;
            j = lps[j - 1];
        }
        else if (i < n && pattern[j] != text[i])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return count;
}

signed main()
{
    int n, m, q;
    cin >> n >> m >> q;
    string s, s1;
    cin >> s >> s1;

    vector<int>ans(n+1,0);
    f(i,0,n){
        string tmp = s.substr(i,m);
        if( s1 ==  tmp){
            ans[i+1] = ans[i] + 1;
        }
        else{
            ans[i+1] = ans[i];
        }
        cout << s1 << ' ' << tmp << '\n';
    }
    for(auto i : ans){
        cout << i << " ";
    }
    nl;
    if (m > n)
    {
        while (q--)
        {
            cout << "0\n";
        }
        
    }
    else{
        while (q--)
        {
            int a, b;
            cin >> a >> b;
            cout << ans[b] - ans[a-1];
            nl;
            // cout << KMP(s.substr(a - 1, b - a + 1), s1) << '\n';
        }
    }
    return 0;
}
