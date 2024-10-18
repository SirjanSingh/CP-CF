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
   int t;cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;cin>>s;    
    int ans = n;
    int l = 0;
    int r = n-1;
    while(l<=r){
        if((s[l] == '0' && s[r] == '1') || (s[r] == '0' && s[l] == '1')){
            l++;
            r--;
            ans-=2;
        }
        else break;
    }
    cout << ans << '\n';
    

    }
    return 0;
}