#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(),vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    
        vector<int>a(n);

        f(i, 0, n)
        {
             cin >> a[i];
             int temp = a[i];
        }
        sort(all(a));
        int ans = a[0];
        for(auto i : a) ans = min(ans&i,ans);
        // cout  << (a[0] & a[n-1]) << '\n';
        cout  << ans <<'\n';
    }
    return 0;
}