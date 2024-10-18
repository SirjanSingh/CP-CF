#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(), vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int, int>
#define mapci map<char, int>

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> a(n), b(n), c(n);
        f(i, 0, n) { 
            cin >> a[i].x; 
            a[i].y = i + 1; 
        }
        f(i, 0, n) { 
            cin >> b[i].x; 
            b[i].y = i + 1; 
        }
        f(i, 0, n) { 
            cin >> c[i].x; 
            c[i].y = i + 1; 
        }

        sort(all(a));
        sort(all(b));
        sort(all(c));

        int ans = 0;
        for(int i = n - 1; i > n - 4; i--) {
            for(int j = n - 1; j > n - 4; j--) {
                for(int k = n - 1; k > n - 4; k--) {
                    if(a[i].y != b[j].y && b[j].y != c[k].y && c[k].y != a[i].y) {
                        ans = max(ans, a[i].x + b[j].x + c[k].x);  
                    }
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
