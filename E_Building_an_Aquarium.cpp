#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define fr(i, x, y) for (int i = x; i > y; i--)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(),vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int,int>
#define mapci map<char,int>
#define pii pair<int,int>

bool fx(int x,int h,vector<int>a,int n){
    int ans = 0;
    f(i,0,n){
        ans = max(h-a[i],0ll) + ans;
    }
    return ans <= x;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    // vector<int>pfx(2*1e5+1,0);
    while(t--){
        int n,x;
        cin>>n>>x;
    
        vector<int>a(n);
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
        }
        int l = 0;
        int r = 2*10e9;
        while(l<r){
            int mid = ((l+r)/2);
            if(fx(x,mid,a,n)){
                l = mid+1;
            }else{
                r = mid;
            }
        }
        cout << r-1 << '\n';
        // sort(all(a));
        // cout << sum << '\n';

    }
    return 0;
}