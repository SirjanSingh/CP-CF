#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto i : s)
            mp[i]++;
        int pos = 0;
        int totns = 0;
        int totew = 0;
        for (auto i : mp)
        {
            if (i.first == 'N' || i.first == 'S')
                totns += i.second;
            if (i.first == 'W' || i.first == 'E')
                totew += i.second;
        }
        cout << totew << ' ' << totns << ' ';
        if ((totew) % 2 != 0 || totns % 2 != 0)
        {
            cout << "NO\n";
            pos = 1;
        }
        if (n == 2 && (s == "NS" || s == "SN" || s == "EW" || s == "WE"))
        {
            cout << "NO\n";
            pos = 1;
        }

        if (!pos)
        {
            int chvns = 0, chvew = 0;
            for (char i : s)
            {
                if (chvns % 2 == 0)
                {
                    chvns++;
                }
                if (chvew % 2 == 0)
                {
                    chvew++;
                }
            }
            cout << '\n';
        }
    }
    return 0;
}