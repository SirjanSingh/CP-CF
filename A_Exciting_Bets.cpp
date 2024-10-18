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
        int a,b;
        cin >>a >>b;
        if(a==b)    cout << "0 0\n";
        else{
            int gcd = __gcd(b-a,a);
            gcd = abs(a-b);
            cout << gcd << ' ' << min(a%gcd,gcd-a%gcd) << '\n';
        }
    }
    return 0;
}