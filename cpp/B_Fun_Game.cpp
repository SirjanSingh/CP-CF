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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 == s2)
            yes;

        else if (s1[0] != s2[0] && s1[0] == '0')
            no;
        else if (n == 1)
            no;
        else
        {
            int chng = 0;
            bool flag = false;
            f(i, 1, n)
            {
                

            }
            if(!flag) yes;
                
            // nl;
        }
    }
    return 0;
}