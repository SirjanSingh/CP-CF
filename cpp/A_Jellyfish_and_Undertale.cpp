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
        int a,b,n;
        cin>>a >> b >> n;
    
        vector<int>v(n);

        f(i, 0, n)
        {
             cin >> v[i];
        }
        // int i = 0;
        // sort(all(v));
        int ans = 0;
        // while(b--){
        //     if(i<n)
        //         b += min(a,v[i]);
        //     i++;

        //     // ans++;
        // }
        
        f(i, 0, n){
            // ans+=min(a,b+v[i]);
             ans += min(a - 1, v[i]) ;
            //  cout << b << ' '<< v[i] << '\n';
            //  b--;
            //  if(b < 0) break;
            // ans--;
        }
        cout << ans + b << '\n';
    }
    return 0;
}