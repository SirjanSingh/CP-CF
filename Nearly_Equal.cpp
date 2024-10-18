#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()
#define x first
#define y second
#define nl cout << '\n';
#define pb push_back
#define pob pop_back
int diff (string x,string y,int m){
    int dif = 0;
    f(i,0,m){
        if(x[i] != y[i]) dif++;
    }
    return dif;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        // int n = s1.length();
        int mx = INT_MAX;
        int cur = 0;
        for (int start = 0; start < n; ++start)
        {
            for (int end = start + 1; end <= n; ++end)
            {
                if (end - start == m)
                {
                    string temp = s1.substr(start, end - start);
                    mx = min(mx,diff(temp,s2,m));
                }
            }
        }
        // nl;
        cout << mx << '\n';
    }
    return 0;
}