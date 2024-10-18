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
    int x = -1,y = -1;
    pair<int,int>ans = {-1,-1};
    while(t--){
        int a,b;char c;
        cin >> c >> a >> b;
        if(c == '+'){
            ans = max(ans,{max(a,b),min(a,b)});
            x = max(x,max(a,b));
            y = max(y,min(a,b));
        }else{
            // x = ans.first,y=ans.second;
            if((x<=a && y <= b) || (x<=b && y <= a)){
                yes;
            }else no;
        }
        // cout << ans.first  << " " << ans.second << "\n";
        // cout << x << " " << y << "\n";
    }
    return 0;
}