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


// Custom comparator
struct cmp {
    bool operator()(int a, int b) const { return a > b; }
};

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    map<int,int> mp;
    unordered_map<int, int> un;
    f(i, 0, n)
    {
        cin >> a[i];
        int temp = a[i];
        mp[temp]++;
    }
    set<int> st, s2;
    sort(all(a), greater<int>());
    int ans = 0;
    int ext = 0;
    for (auto i : mp)
    {
        // cout << i.x << ' ' << i.y << '\n';
        f(j, 0, i.y)
        {
            if (i.x - j == 0)
                break;
            if (un[i.x - j] == 0)
            {
                st.insert(i.x - j);
                un[i.x - j]++;
            }
            else
            {
                int k = 1;
                while (un[i.x - j - k] != 0)
                {
                    k++;
                }
                un[i.x - j - k]++;
                st.insert(i.x - j - k);
                // cout << i.x-j-k << '\n';
            }
        }
    }
    // f(i, 0, n - 1)
    // {

    //     if (a[i] - ext != a[i + 1] - ext)
    //     {
    //         st.insert(a[i] - ext);
    //         ext = 0;
    //     }
    //     else
    //     {
    //         st.insert(a[i] - ext);
    //         ext++;
    //     }
    // }
    // if (a[n - 1] != a[n - 2])
    //     st.insert(a[n - 1] - ext);

    for (auto i : st)
    {
        if (i > 0)
            ans += i;
        // cout << i << ' ';
    }
    cout << ans << '\n';

    return 0;
}