#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(),vector.end()
#define x first
#define y second

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    
        vector<pair<int,int>>a(n);

        f(i, 0, n)
        {
             cin >> a[i].first;
             a[i].second = i+1;
        }
        vector<pair<int,int>>b = a;
        // for(auto i : b) cout << i.x << ' ' << ' ' << i.y << '\n';
        // cout << '\n' ;
        sort(all(a));
        // for(auto i : a) cout << i.x << ' ' << ' ' << i.y << '\n';
        // cout << '\n' ;
        int mn = INT_MAX;
        int flag = false;
        int gcd = __gcd(abs(a[0].x-b[0].x), abs(a[1].x-b[1].x) );
        f(i,0,n){
            // if(a[i].x == b[i].x)    continue;
            // mn = min(abs(a[i].x - b[i].x) , mn);
            gcd = __gcd(gcd,abs(a[i].x - b[i].x));
            flag = true;
        }

        cout << gcd << '\n';
       }
    return 0;
}