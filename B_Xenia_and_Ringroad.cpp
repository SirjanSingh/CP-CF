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

    int n, m;
    cin >> n >> m;

    vector<int> a(m);

    f(i, 0, m)
    {
        cin >> a[i];
        int temp = a[i];
    }
    int req = a[0] - 1;
    f(i,1,m){
        if(a[i] < a[i-1]){
            req += (n-a[i-1]) + a[i];
        }else{
            req += a[i] - a[i-1];
        }
    }
    cout << req;
    return 0;
}