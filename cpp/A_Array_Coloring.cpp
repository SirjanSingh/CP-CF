#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

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

        vector<int> a(n);
        map<int,int>mp;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            mp[temp%2]++;
        }
        if(mp[1]%2==1) no;
        else yes;
    }
    return 0;
}