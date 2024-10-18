#include <bits/stdc++.h>
using namespace std;
#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(), vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int, int>
#define mapci map<char, int>

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
        vector<string> a(n);
        mapci mp1, mp2;
        f(i, 0, n)
        {
            cin >> a[i];
            f(j, 0, m) mp1[a[i][j]]++;
        }

        vector<string> b(n - 1);
        f(i, 0, n - 1)
        {
            cin >> b[i];
            f(j, 0, m) mp2[a[i][j]]++;
        }
        for(char i = 'a';i<='z';i++){
            i = (char)i;
            
        }
    }
    return 0;
}