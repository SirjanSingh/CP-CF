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

int up(vector<int> a, int temp)
{
    int n = a.size();
    int l = 0, r = n -1, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (a[mid] > temp)
            r = mid - 1;
        else
            l = mid + 1;
        // cout << l << ' ' << r << '\n';
    }
    return r ;
}
int low(vector<int> a, int temp)
{
    int n = a.size();
    int l = 0, r = n-1, mid;
    while (l <= r)
    {
        mid = l+(r - l) / 2;
        if (a[mid] < temp)
            l = mid + 1;
        else
            r = mid - 1;
        // cout << l << ' ' << r << '\n';
    }
    return l ;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        int n;
        cin >> n;

        vector<int> a(n);

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];

        }
        sort(all(a));
        // f(i,0,n) cout << a[i] << ' ';
        // nl;
        int k ;
        cin >> k;
        f(i,0,k){
            int l,r;
            cin >> l >> r;
            // cout << up(a,r) - low(a,l) + 1 << ' ';
            cout << upper_bound(all(a),r) - lower_bound(all(a),l) << ' ';
        }
    
    return 0;
}