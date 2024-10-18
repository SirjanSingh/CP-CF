#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

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

        vector<int> a(n),b(n);

        f(i, 0, n){ cin >> a[i]; b[i] = a[i]; }

        sort(b.begin(),b.end());
        bool flag = false;
        if(k!=1)    yes;
        else {
            f(i,0,n){
                if(a[i] != b[i]){
                    flag = true;
                    break;
                }
            }
            if(!flag)   yes;
            else no;
        }
    }
    return 0;
}