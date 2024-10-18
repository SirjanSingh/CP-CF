#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(),vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int,int>
#define mapci map<char,int>

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        int t,k,x;
        cin >> t >> k >> x;
        if(t == x) yes;
        else if(x < t) no;
        else{
            // cout << x <<  ' ' << (x-1)%k;
            if(x < t+k){ no; return 0;}
            x-=t;
            if(x%k == 0 || ((x-1)%k)==0)yes;
            else no;
        }
    
    return 0;
}