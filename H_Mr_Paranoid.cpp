#include <bits/stdc++.h>
using namespace std;


#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES"
#define no cout << "NO"

//taken from gfgs
int power(long long x, unsigned int y, int p) 
{ 
    int res = 1;     // Initialize result 
 
    x = x % p; // Update x if it is more than or 
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
 
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p; 
    } 
    return res; 
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    string s;
    cin >> s;
    int l = s.length();
    int pro = 1;
    int ans = ceil(k/n) + 0.1;
    int left = k % n;
    // while(ans--)    s +=s;
    // s = s.substr(0,k);
    // cout << s << '\n';

    f(j,0,n){
        char i = s[j%(n)];
        // cout << i<< " ";
        if(i == '@')    pro = (pro*(26+10) )%1000000007;
        else if( i == '+')    pro = (pro*(10+7)) %1000000007;
        else    pro = (pro*(26+7))%1000000007;
    }
    // cout << '\n';

    // cout << pro<<'\n';
    pro = power(pro,ans,1000000007);
    // cout<<power(2,10,1000) << '\n';
    // cout << '\n';
    // cout << pro;
    // cout << '\n' << ans << " "<<  left;
    f(j,0,left){
        char i = s[j];
        // cout << i<< " ";
        if(i == '@')    pro = (pro*(26+10) )%1000000007;
        else if( i == '+')    pro = (pro*(10+7)) %1000000007;
        else    pro = (pro*(26+7))%1000000007;
    }
    // cout << '\n';
    cout << pro;

    return 0;         
}