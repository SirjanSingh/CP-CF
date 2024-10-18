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
        if(n==3)    cout << 3 << '\n';
        else if(n==2) cout << 2 << '\n';
        else{
            int cursum = 0,sum = 0;;
            f(i,1,n+1){
                int mul = 1,cursum = 0;;
                f(j,1,n+1){
                    if(mul*j <= n ){
                        cursum+=mul*j;
                    } else break;
                    cout << mul * j << ' ' << mul  << ' ' << j << '\n';
                }
                sum+=max(cursum,sum);
                cout << cursum << ' ' << sum  << '\n';
            }
            cout << sum << '\n';
        }
        
    }
    return 0;
}