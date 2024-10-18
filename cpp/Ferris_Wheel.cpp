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
   
        int n,k;
        cin>>n >> k;
    
        vector<int>a(n);

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
   
        }
        sort(all(a));
        int l=0,r=n-1;
        int ans = 0;
        while(l<=r){
            if(a[l] + a[r] <= k){
                l++,r--;
                ans++;
            }
            else r--,ans++;
        
    }
    cout << ans ;
    return 0;
}