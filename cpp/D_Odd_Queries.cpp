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
        int n,q;
        cin>>n >> q;
    
        vector<int>a(n);
        int sum = 0;
        f(i, 0, n)
        {
            int temp;
            cin >> temp;
            sum +=temp;
            a[i] = sum;
        }
        // for(auto i : a) cout << i << ' ' ;
        // cout << '\n';
        f(i,0,q){
            int x,y,z;
            cin >> x >> y >> z;
            int sumchanged = (y-x+1) * (z);
            int newsum = (sum - (a[y-1] - ((x==1)?0:a[x-2])) + sumchanged);
            int newparity = newsum%2;
            // cout << a[y-1] << '-' << ((x==1)?0:a[x-2]) << ' ' ;
            // cout << sumchanged << ' ' << newsum << ' ' << newparity << '\n';
            if(newparity)   yes;
            else no;
        }
    }
    return 0;
}