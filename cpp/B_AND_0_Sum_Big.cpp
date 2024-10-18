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
#define p 1000000007
int power(int n,int k){
    int ans = 1;
    while(k--){
        ans = (ans*n)%p;
    }
    return  ans%p;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin >> n >> k;
        cout << power(n,k);
        nl;
        
    }
    return 0;
}