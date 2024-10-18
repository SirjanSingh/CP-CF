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
        int n,m,k;
        cin>>n>>m>>k;
    
        vector<int>a(n);
        f(i,m,n) a[i] =  i+1;
        sort(all(a),greater<int>());
        // a[0] = k;
        // a[n-1] = m;
        int l = 1;
        f(i,0,n){
            if(a[i] == 0){
                a[i] = l;
                l++;
            }
        }
        f(i,0,n) cout << a[i] << ' ' ;
        nl;

    }
    return 0;
}