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
        int sum = 0;
        bool flag = false;
        int mx = -1,mn = INT_MAX;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            // cout << sum << ' ' ;
            mx = max(mx,temp);
            mn = min(mn,temp);
            // if(sum == a[i]) flag = true;
            // sum += a[i];
        }
        // nl;
        if(mx == mn) no;
        else{
            yes;
            sort(all(a),greater<int>());
            int cmx = 0, cmn = 0;
            cout << mx << ' ' << mn << ' ' ;
            f(i,0,n){
                if(a[i] == mn && cmn == 0){
                    cmn++;
                }else if(a[i] == mx && cmx == 0){
                    cmx++;
                }else{
                    cout << a[i] << ' ';
                }
            }
            nl;
        }
    }
    return 0;
}