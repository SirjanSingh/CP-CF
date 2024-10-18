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
    int t;
    cin>>t;
    vector<string>a = {"0","1"},b=a;
    f(i,0,t-1){
        reverse(all(b));
        a.insert(a.end(),all(b));
        int l = a.size();
        f(i,0,l/2)  a[i] = "0" + a[i];
        f(i,l/2,l)  a[i] = "1" + a[i];
        b=a;
    }
    for(auto i : a) cout<<i<<"\n";

    return 0;
}