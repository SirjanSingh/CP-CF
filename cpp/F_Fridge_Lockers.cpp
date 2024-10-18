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
        int n, m;
        cin >> n >> m;
        vector<int> a;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
            sum += a[i];
        }

        if (m < n || n == 2)
        {
            cout << "-1\n";
            continue;
        }
        else
        {
            vector<int> b = a;
            sort(a.begin(), a.end());
            int addCost = a[0] + a[1];
            int diff = m - n;
            cout << sum * 2 + diff * addCost << '\n';
            // here we willl add the remaing cost of the additional cost  to completye the number of chains we req acc

            for (int i = 1; i <= n; i++)
            {
                cout << i << " " << ((i + 1 > n) ? (i + 1) % n : i + 1) << '\n';
            }
            int si = 0, ssi = 0;
            bool flag = false;
            // now we find the index of smallest and second smallest element;
            for (int i = 0; i < n; i++)
            {
                if (b[i] == a[0]  &&  !flag)
                {
                    si = i+1;
                    flag = true;
                    continue;
                }
                if (b[i] == a[1])
                    ssi = i+1;
                if (si && ssi)
                    break;
            }

            while (diff--)
            {
                cout << si << " " << ssi << "\n";
                // printf the samllest and the second smallest element form the array
            }
        }
    }
    return 0;
}