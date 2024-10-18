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
        f(i,0,n){
            cin>>a[i];
        }
        sort(all(a));

        if(a[0] == a[n-1])  cout << "-1\n";
        else{
            int i = 0;
            for(int j : a)  if(j == a[0]) i++;
            cout << i << ' ' << n-i << '\n';
            f(j,0,i)    cout << a[j] << ' ';
            cout << '\n';
            f(k,i,n) cout << a[k] << ' ';
            cout << '\n';
        }
    }
    return 0;
}