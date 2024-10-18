#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()
#define nl cout << '\n'

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int c = 0;
        map<pair<int,int>,int>mp;
        f(i, 0, n){
            int temp; cin >> temp;
            int tx = temp%x;
            int ty = temp%y;
            c+=mp[{(x-tx)%x,ty}];
            mp[{tx,ty}]++;
        }
        cout << c;nl;        
    }
    return 0;
}