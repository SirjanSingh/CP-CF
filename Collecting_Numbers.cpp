#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(),vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int,int>
#define mapci map<char,int>

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        int n;
        cin>>n;
    
        vector<pair<int,int>>a(n);

        f(i, 0, n)
        {
            cin >> a[i].x;
            a[i].y = i+1;
        }
        int ans = 1;
        sort(all(a));
        f(i,0,n-1){
            // cout << a[i].x << ' ' << a[i].y;
            // nl;
            if(a[i].y > a[i+1].y)
            ans++;
        }
        cout <<ans;
    
    return 0;
}