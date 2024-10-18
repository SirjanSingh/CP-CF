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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    
        vector<int>a(n+1);
        
        f(i, 1, n+1)
        {
            cin >> a[i];
            int temp = a[i];

        }
        int l=1,r=n;
        int x=a[l],y=a[r];
        int ans= 0;
        while(l<r){
            // cout << x << ' ' << y ;
            // nl;
            if(x == y){
                l++,r--;
                x+=a[l];
                y+=a[r];
                ans = l+(n)-r-1;
            }else if(x < y){
                x += a[++l];
            }else   y += a[--r];
        }
        cout << ans << '\n';
    }
    return 0;
}