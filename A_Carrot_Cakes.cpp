#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(), vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int, int>
#define mapci map<char, int>

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,t,k,d;
    cin >> n >> t >> k >> d;
    if(k>=n)    no;
    else{
        int wso = ((n+k-1)/k) * t;
        // cout << wso ;
       if(wso > t+d)yes;
       else no;

    }

    return 0;
}