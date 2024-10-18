#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(),vector.end()


//taken from gfgs

// Returns the Most Significant Bit
// Position (MSB)
int MSBPosition( int N)
{
    int msb_p = -1;
    while (N) {
        N = N >> 1;
        msb_p++;
    }
    return msb_p;
}
 
// Returns the Bitwise OR of all
// integers between L and R
 int findBitwiseOR( int L,
                            int R)
{
    int res = 0;
 
    // Find the MSB position in L
    int msb_p1 = MSBPosition(L);
 
    // Find the MSB position in R
    int msb_p2 = MSBPosition(R);
 
    while (msb_p1 == msb_p2) {
        int res_val = (1 << msb_p1);
 
        // Add this value until msb_p1 and
        // msb_p2 are same;
        res += res_val;
 
        L -= res_val;
        R -= res_val;
 
        // Calculate msb_p1 and msb_p2
        msb_p1 = MSBPosition(L);
        msb_p2 = MSBPosition(R);
    }
    // Find the max of msb_p1 and msb_p2
    msb_p1 = max(msb_p1, msb_p2);
 
    // Set all the bits from msb_p1 upto
    // 0th bit in the result
    for (int i = msb_p1; i >= 0; i--) {
        int res_val = (1 << i);
        res += res_val;
    }
    return res;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n >> m;
        int ans = 0;
        int req = ((n-m >= 0)?n-m:0);
        if( req  == n + m) cout <<  req << '\n';
        else{
            // f(i, req, n+m+1)
            // {
            //     ans = ans | i;
            // }
            // cout <<"hi from or ";
            cout << findBitwiseOR(req,n+m) << '\n';
        }

    }
    return 0;
}