#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()
#define x first
#define y second
#define nl cout << '\n';
#define pb push_back
#define pob pop_back
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
        int n;
        cin >> n;
        // string s; cin >>s;
        vector<int> a(n);

        int l = 1, r = n;
        if (n == 3)
            cout << "1 2 3";
        else if (n % 2 == 0)
            while (l <= r)
            {
                if (l == r)
                {
                    cout << l;
                    break;
                }
                else
                {
                    cout << l << ' ' << r << ' ';
                    l++;
                    r--;
                }
            }
        else
        {
            l=1,r=n-1;
            while (l <= r)
            {
                if (l == r)
                {
                    cout << l;
                    break;
                }
                else
                {
                    cout << l << ' ' << r << ' ';
                    l++;
                    r--;
                }
            }
            cout << n;
        }
        nl;
        // cout << s << ;
    }
    return 0;
}