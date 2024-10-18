#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(),vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n >> k;
        vector<int>a(n);
        f(i, 0, n)  cin >> a[i];
        sort(all(a));
        int mx = 0;
        int curmx = 0;
        f(i,1,n){
            if(abs(a[i] - a[i-1]) <= k) curmx++;
            else{
                mx = max(curmx,mx);
                curmx = 0;
            }
        }
        mx = max(curmx,mx);
        cout <<n- mx - 1 << '\n';
    }
    return 0;
}