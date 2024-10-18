#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define fr(i, x, y) for (int i = x; i > y; i--)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(), vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int, int>
#define mapci map<char, int>
#define pii pair<int, int>

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        int n;
        cin >> n;

        vector<int> a(n);
        int s1 = 0;
        int s2 = 0;

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            if(i%2)s1+=a[i];
            else s2+=a[i];
        }
        if(s1 == s2 ) yes;
        else no;

    
    return 0;
}