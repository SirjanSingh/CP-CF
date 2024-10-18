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
        // int n;
        // cin >> n;
        string s;
        cin >> s;
        int count = 0;
        int zook = 0;
        f(i, 0, s.length() - 1)
        {
            if (s[i] == '0' && s[i + 1] == '1')
            {
                zook++;
            }
            if(s[i+1] < s[i]){

            }
            if (s[i] == '1' && s[i + 1] == '0')
            {
                count++;
            }
        }
        cout << count + 1 + zook - ((zook > 0)? 1:0)<< '\n';
    }
    return 0;
}