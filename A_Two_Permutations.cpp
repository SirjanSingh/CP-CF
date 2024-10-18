#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "Yes\n"
#define no cout << "No \n"
#define all(vector) vector.begin(),vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        int req = n-a-b;
        if(a == n && b == n)  yes;
        else if(req >= 2)    yes;
        else    no;
    }
    return 0;
}