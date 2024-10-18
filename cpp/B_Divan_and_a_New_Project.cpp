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
        int n;
        cin >> n;

        vector<pair<int,int>> a(n),c;

        f(i, 0, n)
        {
            cin >> a[i].x;
            a[i].y = i;
        }
        c = a;
        sort(all(a),greater<pair<int,int>>());
        vector<int>b(n+1);
        b[0] = 0;
        int l=-1,r=1;
        int tot = 0;

        f(i,0,n)    b[a[i].y + 1] = ((i)%2==0)?l--:r++;
        f(i,0,n)    tot += 2*c[i].x*(abs(b[i+1])); 
        cout << tot ;
        nl;
        for(auto i : b) cout << i << ' ' ;
        nl;

    }
    return 0;
}