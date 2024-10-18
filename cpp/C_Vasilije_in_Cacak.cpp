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
        int a,b,c;
        cin >> a >> b >> c;
        int mn = (b)*(2 + (b-1));
        int mx = (b)*(2*a-(b-1)) ;
        if(c*2 >= mn && c*2 <= mx)   yes;
        else no;
    }
    return 0;
}