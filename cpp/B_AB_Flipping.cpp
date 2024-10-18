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

        string s;
        cin >> s;
        int a[100] = {0};
        int srt = INT_MAX,st = 0;
        int cura = 0, curb = 0;
        int ans = 0;
        // if(s[n-1] == 'A')n--;
        string b = s;
        f(i, 0, n)
        {
            if (b[i] == 'B'){
                st = i;

            // else
            }
        }
        f(i, 0, n)
        {
            if (b[i] == 'A'){
                srt = i;

            // else
                break;
            }
        }
        reverse(all(b));
        // cout << srt << '-';
        // nl;
        f(i, 0, n - srt)
        {
            a[s[i]]++;
            // if(a['A'] == 0 && s[i] != 'A'){
            //     srt = i+1;
            // } else{
            //     break;
            // }
            if (s[i] == 'A')
            {
                // if( s[i+1] == 'A'){
                //     cur++;
                // }
                cura++;
            }
            else if (s[i] == 'B' && a['A'] != 0)
            {
                // if (s[i + 1] == 'B')
                // {
                curb++;
                // }
            }
            // cout << cura << ' ' << curb << endl;
             if (s[i] == 'B' &&(i == n-1-srt ||  a[i + 1] == 'A' ))
            {
                int tmp  = min(cura, curb);
                if(tmp !=0)
                ans+=tmp+tmp-1;
                cura = 0;
                curb = 0;
            }

        }
        cout << max(st-srt,0ll) << '\n';
    }
    return 0;
}