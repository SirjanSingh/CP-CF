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
        int x,y,k;  cin >> x >> y >> k;
        int totreqtrades = k;
        int totsticksforcoal = k * y; 
        int totalsticksforstick = k;
        int totalsticks = totalsticksforstick + totsticksforcoal - 1;
        totreqtrades += (totalsticks+x-2)/(x-1);
        cout << (int)totreqtrades ;// << '\n'; << (int)totsticksforcoal << ' ' <<fixed <<  setprecision(3) << (totalsticks/(x-1)) <<  "\n";
        cout << '\n';
    }
    return 0;
}