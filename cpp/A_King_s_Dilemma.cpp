#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define fr(i, x, y) for (int i = x; i > y; i--)
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
        int mn = INT_MAX;
        int ans = 0;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            mn = min(mn,temp);
        }
        f(i, 0, n) { ans += (a[i] - mn);}
        cout << ans << '\n';
    }
    return 0;
}