#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
}
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
        char a[2 * n][2 * n];
        int c = 0;
        for (int j = 0; j < n * 2; j += 2)
        {
            for (int i = 0; i < n * 2; i += 2)
            {
                if (c % 2 == 0)
                {
                    a[j][i] = '#';
                    a[j][i + 1] = '#';
                    a[j + 1][i] = '#';
                    a[j + 1][i + 1] = '#';
                }
                else
                {
                    a[j][i] = '.';
                    a[j][i + 1] = '.';
                    a[j + 1][i] = '.';
                    a[j + 1][i + 1] = '.';
                }
                c++;
            }
            if(n%2==0)  c--;
        }

        for (int i = 0; i < 2*n; i++)
        {
            for (int j = 0; j < 2*n; j++)
            {
                cout << a[i][j];
            }
            cout<<'\n';
        }
        // cout<<"\n\n";
    }
    return 0;
}