#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(),vector.end()

int lcs(int x, int y) {
    int z = x ^ y;
    int tz = 0;
    while ((z & 1) == 0 && z != 0) {
        ++tz;
        z >>= 1;
    }
    return (1 << tz);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        int ans = lcs(x, y);
        cout << ans << endl;
    }
    
    return 0;
}
