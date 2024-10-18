#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(),vector.end()
#define nl cout << "\n"
// #define x first
// #define y second
#define mapii map<int,int>
#define mapci map<char,int>

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        double a,b;
        double x,y;
        cin >> a >> b >> x >>y;
        double ans = log10(a/x) + b-y;
        char req;
        if(ans == 0)    req = '=';
        else if(ans > 0)    req = '>';
        else    req = '<';
        cout << req << '\n'; 
    }
    return 0;
}