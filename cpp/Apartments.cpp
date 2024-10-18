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

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin >> n >> m >> k;

    vector<int> a(n),b(m);

    f(i, 0, n)
    {
        cin >> a[i];
        int temp = a[i];
    }
    f(i, 0, m)
    {
        cin >> b[i];
    }
    sort(all(a));
    sort(all(b));
    int ans = 0;
    int j = 0;
    f(i,0,n){
        // cout << b[j] << ' '<< a[i] ;nl;
        if(b[j]-k <= a[i] && b[j] +k >= a[i]){
            j++;
            ans++;
            continue;
        }
        if(b[j]+k < a[i]){
            if(j<m){ j++;
            // if(i>0)
             i--;
            }
            
        }
        if(j == m+1) break; 
    }
    cout << ans << "\n";
    return 0;
}