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

int fin(int x,int y){
    int ans = 0;
    while(x%y == 0){
        x=x/y;
    }
    return x;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        // x = fin(x,y);
        if(y - x%y > k) cout << (x+k) << '\n';
        else if(y-x%y == k) cout << fin(x+k,y) <<'\n';
        else{
            // cout << x + ((x%y == 0)?0:y) - x%y << ' ' ;
            // k-=(((x%y == 0)?0:y)- x%y);
            // x = fin(x + ((x%y == 0)?0:y) - x%y, y);
            // cout << x << ' '; 
            // cout << k << ' ';
            while(k>0){
                if(x%y <= k){
                    k -= ((x%y == 0)?0:y) - x%y;
                    x = fin(x + ((x%y == 0)?0:y) - x%y,y );
                    // nl;
                    cout << x << ' ' << k ; nl;  
                }else break;
            }
            // k = k % y;
            // cout << k << ' ';

            // x = fin(x+k,y);
            cout << x + k<< '\n';
            // cout << fin(x+k,y) <<'\n';
            nl;
        }
    }
    return 0;
}