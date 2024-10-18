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
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> a(n), b;
       
            // cout << req << '\n';
            int i = 1;
            int cop = n;
            while (n--)
            {
                int req = ((l+i-1)/i) * i;
                if (req > r)
                {
                    
                    break;
                }
                else
                    b.push_back(req);
                // if(req > r) req = l;
                // cout << req << ' ' ;
                // req++;
                i++;
            }
            // cout << i ;
            // nl;
            if(i==cop+1){
                yes;
                for(auto i : b)cout << i << ' ' ;
            nl;
            }else no;

        
    }
    return 0;
}