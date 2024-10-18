#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "Yes\n"
#define no cout << "No \n"
#define all(vector) vector.begin(), vector.end()

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

        vector<int> a(n);
        set<int>st;
        f(i, 0, n)
        {
            cin >> a[i];
        }
        int curmx = INT_MAX;
        int k = -1;
        f(i, 0, n - 1)
        {
            st.insert(a[i]);
            if (a[i] <= a[i + 1])
                curmx = min(a[i],curmx);
            else
            {
                k = i;
                break;
            }
        }
        int newcurmx = 0;
        bool flag = false;
        if (k == -1)
            yes;
        else
        {
            k++;
        // cout << k << '\n';
            f(i, k, n - 1)
            {
                if (a[i] <= a[i + 1])
                    newcurmx = a[i + 1];
                else
                {
                    flag = true;
                    break;
                }
                // cout << a[i] << ' ' << a[i + 1] << ' ' << curmx << ' ' << newcurmx << '\n';
                // for(auto i  : st){
                //     if(i == a[i])  {
                //         flag = true;
                //         break;
                //     }
                // }
                if(newcurmx >= curmx){
                    flag = true;
                    break;
                }
            }
            if (!flag)
                yes;
            else
                no;
        }
    }
    return 0;
}