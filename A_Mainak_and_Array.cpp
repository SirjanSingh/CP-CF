#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int>b(n);
        f(i, 0, n){
            cin >> a[i];
            int temp = a[i];
            b[i] = a[i];
        }
        int mn = a.front();
        int mx = a.back();
        if(n!=1)
        sort(a.begin() + 1, a.end() - 1);
            if(n== 1){  cout << 0 << '\n'; continue;}
            int ans =  -1;
            ans = max(ans, (a[n-1] - min(a[0],a[1])));
            ans = max(ans, ( max(a[n-1],a[n-2]) - a[0]));
        f(i,0,n){
            if(i == 0)    ans = max(ans, a[n-1] - a[0]);
            else  ans = max(ans, (b[i - 1] - b[i]));
        }
        cout << ans << '\n';
    }
    return 0;
}