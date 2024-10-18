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

    int n;
    cin >> n;

    vector<int> a(n);
    int mx = -1;
    f(i, 0, n)
    {
        cin >> a[i];
        int temp = a[i];
        mx = max(mx, temp);
    }
    int ans = 0;

    bool flag = false;
    f(i, 0, n - 1)
    {
        if(a[i] == mx)  flag = true;
        if (!flag){
            if (a[i] > a[i + 1])
            {
                ans = -1;
                break;
            }
        }
        else{
            if (a[i] < a[i + 1])
            {
                ans = -1;
                break;
            }
        }
    }
    if(ans == -1)   no;
    else yes;

    return 0;
}