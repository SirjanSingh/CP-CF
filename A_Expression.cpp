#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(),vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin >> a>> b>>c;

    int ans = max({(a+b+c), (a+b*c), ((a+b)*c), (a*b+c),( a*(b+c)), (a*b*c)});
    cout << ans;
    return 0;
}