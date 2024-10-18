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
        int n;
        cin >> n;
        
        vector<int> a(n);

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
        }
        int m = 0;
        vector <int>b;
        b.push_back(a[0]);
        bool flag = false;

        f(i,1,n){
            if(a[i] < a[i - 1] && !flag){
                // cout << 1 << ' ' << a[i] << ' ';
                b.push_back(1);
                b.push_back(a[i]);
                // flag = true;
                m++;
                continue;
            }else  b.push_back(a[i]);
        }
        cout << n + m <<'\n';
        for(auto i : b) cout << i << ' ';
        cout << '\n';

    }
    return 0;
}