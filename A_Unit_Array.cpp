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
        int x;
        cin>>x;
    
        vector<int>a(x);
        map<int,int>mp;
        f(i, 0, x)
        {
             cin >> a[i];
             int temp = a[i];
             mp[temp]++;
        }
        int p = mp[1];
        int n = mp[-1];
        int sum = p - n;

        if(p == n){
            cout <<(((n)%2!= 0)?1:0)<< '\n';
        }else if(p < n){
            int req = (x)/2;
            cout << n-req +  (((req)%2!= 0)?1:0)<< '\n';
        }else{
            cout << ((n%2!=0)?1:0) << '\n';
        }
    }
    return 0;
}