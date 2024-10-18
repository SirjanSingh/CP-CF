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
    int t,i=1;
    cin>>t;
    int ans = 0;
    while(1){
        if(i>t) break;
        i*=5;
        ans += t/i;
        // ans++;
    }
    cout << ans;
    return 0;
}