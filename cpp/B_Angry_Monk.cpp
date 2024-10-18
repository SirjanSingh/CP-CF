#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(),vector.end()
#define nl cout << "\n"
#define x first
#define y second#include<bits/stdc++.h>
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

bool cr(int n, int m, int k, const string& r) {
    int p = 0, s = 0, j, np;
    while (p <= n) {
        int f = min(p + m, n + 1);
        np = p;
        for (j = p + 1; j <= f; ++j) {
            if (j == n + 1 || (r[j - 1] == 'L' && j <= n)) {
                np = j;
            }
        }
        if (np > p) {
            p = np;
        } else {
            if (p < n && r[p] == 'W') {
                if (s < k) {
                    s++;
                    p++;
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
        if (p == n + 1) {
            return true;
        }
    }
    return false;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        string r;
        cin >> n >> m >> k >> r;
        if (cr(n, m, k, r))
            yes;
        else
            no;
    }
    return 0;
}

#define mapii map<int,int>
#define mapci map<char,int>

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
    
        vector<int>a(k);

        f(i, 0, k)
        {
            cin >> a[i];
            int temp = a[i];
   
        }
        sort(all(a));
        int ans = 0;
        f(i,0,k-1){
            ans += a[i] + (a[i]-1);
        }
        cout << ans << '\n';

    }
    return 0;
}