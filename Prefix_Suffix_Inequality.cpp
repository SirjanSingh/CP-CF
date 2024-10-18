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
    t=1;
    while(t--){
        int n;
        cin>>n;
        n = 5;
        vector<int>a = {3,3,3,3,1};
        int an = a[0];
        cout << an << ' ';
        f(i, 0, n-1)
        {
            cout << (an & a[i+1]) << ' ' ;
            an = an & a[i +1];
        }
        nl;
        int xr = a[0];
        cout << xr << ' ';
        f(i, 0, n-1)
        {
            cout << (xr ^ a[i+1]) << ' ' ;
            xr = xr ^ a[i +1];
        }
        nl;nl;

         an = a[n-1];
        cout << an << ' ';
        for(int i = n-1;i>0;i--)
        {
            cout << (an & a[i-1]) << ' ' ;
            an = an & a[i - 1];
        }
        nl;
         xr = a[n-1];
        cout << xr << ' ';
        for(int i = n-1;i>0;i--)
        {
            cout << (xr ^ a[i-1]) << ' ' ;
            xr = xr ^ a[i -1];
        }
        nl;
    }
    return 0;
}