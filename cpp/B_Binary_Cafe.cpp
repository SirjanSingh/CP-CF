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
        double n,k;
        cin >> n >> k;
        // cout << pow(2,k) << ' ' << n+1 << '\n';
        // cout << k << " " << log2(n + 1) << '\n';
        cout <<(int)(pow(2,(min(k,log2(n+1))))  +0.2)<< '\n';
    }
    return 0;
}