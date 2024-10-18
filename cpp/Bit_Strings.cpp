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
#define mod 1e9+7
int binpow(int b,int p,int m){
    int ans = 1;
    while(p--){
        ans = (ans*b)%m;
    }
    return ans % m;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    cout << binpow(2,t,mod);
    return 0;
}