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
        int row[n][m];
        int column[m][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> row[i][j];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> column[i][j];

        int first = row[0][0];

        int pos;
        bool c = false;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (column[i][j] == first)
                {
                    pos = i;
                    c = true;
                    break;
                }
            }
            if (c)
                break;
        }
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         cout << row[i][j];
        //     }
        //     cout << '\n';
        // }

        // cout << '\n'
        //      << pos << '\n';

        for (int i = 0; i < n; i++)
        {
            // cout << column[pos][i];
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < m; k++)
                {
                    if (row[j][k] == column[pos][i])
                    {
                        for (int x = 0; x < m; x++)
                        {
                            cout << row[j][x] << " ";
                        }
                        cout << '\n';
                    }
                }
            }
        }
        // cout << '\n';

        //  for (int i = 0; i < m; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout<<column[i][j];
        //     }
        //     cout<<'\n';
        // }
    }
    return 0;
}