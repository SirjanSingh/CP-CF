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
        int mx = -1;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
        }
        f(i,0,n-1){
            mx = max(mx,a[i]);
        }
        cout << mx + a[n-1]; 
        nl;
    }
    return 0;
}