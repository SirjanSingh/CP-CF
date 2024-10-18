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
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n >> m;

        int totarea = n + m*4;
        int tot = 0;
        int tot2 = (m)/2 + m%2;
        int arealeft = tot2 *15 - m*4;
        if(arealeft < n)
            tot = (n-arealeft +14)/15;
        // cout << tot2 << ' ' << arealeft << ' ';
        cout << tot+ tot2 << '\n';

    
    }
    return 0;
}