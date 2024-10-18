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
        int a,b,c,d;
         cin >> a >> b >> c >> d;
         if(a==c && b == d){
            cout << 0 << '\n';
         }else{
            
                int ans = 0;
                // if((a==c && d >=b)) ans = 2*d-b;
                // else if( ( b == d && c <= a)) ans = a - c;
                // else 
                if( a-b >= c-d && d>=b) ans = a-c + 2*(d-b);
                else ans = -1;
                cout << ans << '\n';
         }
    }
    return 0;
}