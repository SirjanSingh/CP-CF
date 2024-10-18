#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()
#define x first
#define y second
#define nl cout << '\n';
#define pb push_back
#define pob pop_back
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
        int n, k;
        cin >> n >> k;
        string s1, s2;
        cin >> s1 >> s2;
        vector<int> a(n);
        mapci m1, m2;
        for (auto i : s1)
            m1[i]++;
        for (auto i : s2)
            m2[i]++;

        int flg = 0;
        for (auto i : s2)
        {
            // cout << i << " ";
            if (m1[i] != m2[i])
            {
                flg = 1;
                break;
            }
        }
        // nl;
        if (flg == 1)
        {
            no;
        }
        else
        {
            // nl;
            int chng = 0;
            int mtch = 0;
            int sm1 = 0, sm0 = 0;
            f(i, 0, n)
            {
                if (s1[i] != s2[i])
                    chng++;
                else
                {
                    mtch++;
                    if (s1[i] == '1' && s2[i] == '1')
                        sm1++;
                    if (s1[i] == '0' && s2[i] == '0')
                        sm0++;
                }
            }

            // if (chng % 2 == 0)
            // {
                chng /= 2;
                 if (chng > k)
                    no;
                else
                {
                    if (n == 2)
                    {
                        if (s1[0] == s1[1])
                            yes;
                        else
                        {
                            if (k - chng % 2 == 1)
                                no;
                            else
                                yes;
                        }
                        // continue;
                    }
                    else
                    {
                        // if (mtch == 0)
                        // {
                        //     if (k - chng % 2 == 0)
                        //         yes;
                        //     else
                        //         no;
                        // }
                        // else
                        // {
                        //     if (sm1 > 1 || sm0 > 1 || k - chng % 2 == 0)
                        yes;
                        //     else
                        //         no;
                        // }
                    }
                }
            // }
            // else
            //     no;
            // cout << chng  << '\n';
        }

        // cout << s << ;
    }
    return 0;
}