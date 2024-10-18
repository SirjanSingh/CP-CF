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
    int n;
    cin >> n;
    char f;
    string s1 = "abcdefghijklmnopqrstuvuxyz";
    // cout <<s1.length();
    for (char i : s1)
    {
        cout << "?" << ' ' << i << ' ' << 1 << endl;
        int temp;
        cin >> temp;
        if (temp != 0)
        {
            f = i;
            break;
        }
        // got first character
    }
    string ans = "";
    ans = ans + f;
    f(i, 1, n - 1)
    {
        char a,b;
        int ia =0,ib=0;
        for (char i : s1)
        {
            cout << "?" << ' ' << i << ' ' << 1 << endl;
            int temp;
            cin >> temp;
            if (temp != 0 &&!ia)
            {
                a = i;
                ia=1;
            }
            if (temp != 0 &&!ib)
            {
                b = i;
                ib=1;
            }
            // got first character
        }
    }
    cout << ans;
    return 0;
}