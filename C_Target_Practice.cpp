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

        int a[10][10] = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                         {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                         {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                         {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                         {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                         {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                         {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                         {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                         {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
        int n = 10;
        int tot = 0;
        f(i, 0, n)
        {
            f(j, 0, n)
            {
                char ch;
                cin >> ch;
                if (ch != '.')
                    tot += a[i][j];
            }
        }
        cout << tot << '\n';
    }
    return 0;
}