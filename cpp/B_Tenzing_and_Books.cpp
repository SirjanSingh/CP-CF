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

// from gfgs
string DecimalToBinary(int num)
{
    string str;
    while (num)
    {
        if (num & 1) // 1
            str += '1';
        else // 0
            str += '0';
        num >>= 1; // Right Shift by 1
    }
    reverse(all(str));
    return (str);
}
int check(string a, string b)
{
    int n = a.length();
    // f(i, 0, n)
    // {
    //     if (a[i] == '0')
    //     {
    //         if (b[i] == '1')
    //             return 0;
    //         else
    //             continue;
    //     }
    // }
    bool ans = ((stoi(a)&stoi(b)) == stoi(b));
    return ans;
}
int check1(int a,int b){
    return ((a&b) == a);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n), c(n);

        f(i, 0, n) cin >> a[i];
        f(i, 0, n) cin >> b[i];
        f(i, 0, n) cin >> c[i];

        string sk = DecimalToBinary(k);
        int u = 0;
        if (u == k)
            yes;
        else
        {
            vector<string> binA(n), binB(n), binC(n);
            f(i, 0, n) binA[i] = DecimalToBinary(a[i]);
            f(i, 0, n) binB[i] = DecimalToBinary(b[i]);
            f(i, 0, n) binC[i] = DecimalToBinary(c[i]);

            int x = 0, y = 0, z = 0;
            while (x < n || y < n || z < n)
            {
                if (x < n)
                {
                    if (check(binA[x], sk))
                    {
                        u = u | a[x];
                        x++;
                    }
                    else x=n+1;
                }
                if (y < n)
                {
                    if (check(binB[y], sk))
                    {
                        u = u | b[y];
                        y++;
                    }
                    else y = n+1;
                }
                if (z < n)
                {
                    if (check(binC[z], sk))
                    {
                        u = u | c[z];
                        z++;
                    }
                    else z=n+1;
                }
                // cout << u << ' ' ;
                if (u == k)
                {
                    yes;
                    break;
                }
            }
            if (u != k)
                no;
        }
    }
    return 0;
}