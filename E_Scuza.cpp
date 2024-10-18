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
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> b(n+1,0),c(n + 1);
        int sum = 0;
        int s2 = 0;

        f(i, 0, n)
        {
            int temp;
            cin >> temp;
            sum += temp;
            c[i + 1] = sum;
            b[i + 1] = max(temp,b[i]);
        }
        int temp;
        f(i, 0, q)
        {
            cin >> temp;
            cout << c[( upper_bound(all(b), temp) - b.begin()- 1 ) ]<< ' ';    
        }
        nl;
    }
    return 0;
}