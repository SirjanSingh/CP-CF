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
string mex(string s, vector<string>mp)
{
    map<string, int> ab;
    int n = s.length();
    vector<string> v;
    string tmp = "";
    for (auto i : s)
    {

        v.push_back(tmp + i);
    }
    f(i, 0, n - 1)
    {
        tmp += s[i];
        tmp += s[i + 1];
        v.push_back(tmp);
        tmp = "";
    }
    f(i, 0, n - 2)
    {
        tmp += s[i];
        tmp += s[i + 1];
        tmp += s[i + 2];
        v.push_back(tmp);
        tmp = "";
    }

    for (auto i : v)
    {
        ab[i]++;
        // cout << i << '\n';
    }
    for (auto i : mp)
    {
        // cout << i.x << ' ' << i.y << '\n';

        if (ab[i] == 0)
        {
            return i;
        }
    }
    //  cout << i.x << ' ' << i.y << '\n';
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<string> a;
    int count = 0;
    char ch = 'a', c1 = 'a', c2 = 'a';
    c1--;
    c2--;
    string tmp = "";
    while (count < 1005)
    {
        if (count < 26)
            tmp = ch;
        else if (count < 26 * 26 + 26)
        {
            tmp = c1;
            tmp += ch;
        }
        else
        {
            tmp = c2;
            tmp += c1;
            tmp += ch;
        }
        a.push_back(tmp);
        if (tmp == "zz")
        {
            c2++;
            c1 = 'a';
            c1--;
        }
        if (ch == 'z')
            ch = 'a', c1++;
        else
            ch++;
        count++;
    }

    map<string, int> mp;
    for (auto i : a)
        mp[i]++;
    // cout << i << '\n';
    // cout << a.size();
    // for(auto i : mp)
    //  cout << i.x << ' ' << i.y << '\n';

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << mex(s, a);
        nl;
    }
    return 0;
}