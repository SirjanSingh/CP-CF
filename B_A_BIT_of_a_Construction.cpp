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
        int n,k;
        cin>>n >> k;
        int reqpow = log2(k);
        int ans = pow(2,reqpow) - 1 ;
        if( n == 1){
          cout << k <<'\n';
          continue;
        }
        cout << ans << ' ' << k - ans << ' ';
        f(i, 0, n-2)cout << "0 ";
        cout << '\n';
             
    }
    return 0;
}