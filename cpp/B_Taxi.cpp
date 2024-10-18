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

    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> mp;
    f(i, 0, n)
    {
        cin >> a[i];
        mp[a[i]]++;
        int temp = a[i];
    }
    int total = 0;
    int two_mul = 0;

    total += mp[4];
    total += mp[3];
    total += ceil(mp[2] / 2.0);

    if (mp[2] % 2 != 0 && mp[2] > 0)
        two_mul = 1;

    if (two_mul == 1 && mp[1] >= 1)
    {
        if (mp[1] == 1)
            mp[1] -= 1;
        else
            mp[1] -= 2;
    }

    if (mp[3] < mp[1])
    {
        mp[1] -= mp[3];
        total += ceil((double)mp[1] / 4.0);
    }
    
    cout << total << '\n';
    return 0;
}