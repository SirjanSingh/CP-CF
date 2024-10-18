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
        int n,k;
        cin>>n>>k;
    
        vector<int>a(n),sum;

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
   
        }
        sort(all(a));
        int l = 0,r=n-1;
        sum.push_back(0);
        for(auto i : a) sum.push_back(l+=i); 
        // for(auto i : sum) cout << i << ' ';
        nl;
        // while (l + 1 <= r && k--){
        //     if(a[l] + a[l+1] >= a[r])r--;
        //     else l++,l++;
        //     cout << l << ' ' << r;
        // nl;
        // }
        int ans = 0;

        f(i,0,k+1){
            ans = max(ans , sum[n-k+i]-sum[2*i]);
        }
        cout << ans << '\n';
    }
    return 0;
}