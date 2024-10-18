#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES"
#define no cout << "NO"

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string temp = "";
        f(i, 0, m) temp.push_back('0');

        cout << n << " " << m << ' ' << temp << '\n';
        map<string, int> mp;
        f(i, 0, n)
        {
            int num;
            cin >> num;
            string t2 = temp;
            vector<int> a(num);
            // cout << num << '\n';
            f(i, 0, num)
            {
                cin >> a[i];
                t2[a[i] - 1] = '1';
            }
            mp[t2]++;
            // for (int i : a)
            //     cout << i << " ";
            // cout << '\n';
            // cout << t2 << '\n';

            // sort(a.begin(), a.end());
            // f(i, 0, m)
            // {
            //     if (i == a[i] - 1)
            //     {
            //         temp[a[i] - 1] = '1';
            //     }
            //     else
            //         temp[a[i] - 1] = '0';
            // }
            cout << temp << ' ' << t2 << '\n';
        }
        for(auto i : mp)    cout << i.first << " " << i.second << '\n' ;
        cout << "\n\n";
    }

    return 0;
}