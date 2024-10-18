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
        int n,m;
        cin>>n >> m;
    
        vector<int>a(n);
        int sum = 0;
        int mn = INT_MAX;
        int count = 0;
        f(i, 0, n)
        {
            f(j,0,m){
                int temp;
                cin>>temp;
                sum+=abs(temp);
                if(temp < 0)    count++;
                mn = min(mn,abs(temp));
            }
        }
        cout << ((count % 2 == 0)? sum: sum - 2*mn )<< '\n';
    }
    return 0;
}