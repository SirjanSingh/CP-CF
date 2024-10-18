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
    
        vector<int>a(n);
        int g1=0,g2=0;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            if(i%2==0) g1=__gcd(temp,g1);
            else g2=__gcd(temp,g2);
        }
        int w1=0,w2=0;
        f(i,0,n){
            if(i%2==0){
                if(g2==1) continue;
                if(a[i]%g2==0)w2++;
            }else{
                if(g1==1) continue;
                if(a[i]%g1==0)  w1++;
            }
        }
        // cout << g1 << ' ' << g2 << '\n';
        // cout << w1 << ' ' << w2;
        // nl;
        if(w1==w2 && w1==0 && g1!=1&&g2!=1)cout << max(g1,g2);
        else if(w1 == 0 && g1!=1){
            cout << g1;
            // cout <<"g1";
        }else if( w2 == 0 && g2!=1){
            cout << g2;
            // cout << "g2";
        }
        else   cout << 0;
        // nl;
        nl;
        // if( (g1 == 1 || g2 == 1) || g1==g2) cout << 0  << '\n';
        // else cout << max(g1,g2) << '\n';
    }
    return 0;
}