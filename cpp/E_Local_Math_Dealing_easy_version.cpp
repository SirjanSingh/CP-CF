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

    int n;
    cin >> n;

    vector<int> a(n);

    f(i, 0, n)
    {
        cin >> a[i];
        int temp = a[i];
    }
    int k = 0;
    f(i, 1, n+1)
    {
        vector<int> pre;
        f(j, i, n + 1)
        {
            int temp = i * i - j * j;
            if(a[k] % temp )
                pre.push_back(temp);
            cout << '(' << i << ',' << j << ')' << '\n';
        }
        k++;
        for(auto i : pre) cout << i << ' ';
        nl;
    }
    return 0;
}