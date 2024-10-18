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
        //vector<pair<int,int>>a;
        vector<int> a;
        int p1;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back((temp));
            if (temp == 1)
                p1++;
        }
        sort(a.begin(), a.end());

        if (a[0] != a[1])
        {
            cout << "YES\n";
            continue;
        }
        else
        {
            bool present = false;
            for (int i : a)
            {
                if (i % a[0] != 0)
                {
                    present = true;
                    break;
                }
            }
            if (present)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}