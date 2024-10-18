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
        int n,k;
        cin>>n >> k;
        vector<int>a(n*k);
        int sum = 0;
        int l = (n)/2;
        f(i, 0, n*k)    cin >> a[i];   
        sort(all(a),greater<int>());
        int req = 0;
        f(i,0,n*k){
            if((i+1)%(l+1) == 0){  req++;     sum+=a[i];}
            if(req == k)    break;
        }
        cout << sum <<endl;
    }
    return 0;
}