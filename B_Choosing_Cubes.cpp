#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(),vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,f,k;
        cin>>n >> f >>k;
    
        vector<int>a(n);
        
        f(i, 0, n)
        {
             cin >> a[i];
             int temp = a[i];
        }
        int req = a[f-1];
        sort(all(a),greater<int>());
        // cout << f << ' ' << k << '\n';
        // cout << req<< ' ' << a[k] << ' '<< k  << '\n';
        // for(auto i : a) cout << i << ' ';
        // cout<<'\n';
        if(a[k] == req && a[k-1] == req) cout << "MAYBE\n";
        else if(a[k] < req || ( k == n))  yes;
        else no;
        // cout << '\n';
    }
    return 0;
}