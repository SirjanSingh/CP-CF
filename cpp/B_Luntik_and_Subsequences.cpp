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
        int n;
        cin>>n;
    
        vector<int>a(n);
        int c1= 0,c0=0;
        f(i, 0, n)
        {
             cin >> a[i];
             int temp = a[i];
            if(a[i] == 1)   c1++;
            if(a[i] == 0)   c0++;
        }
        cout << ((c1==0)?0:c1 *(int)pow(2,c0)) << '\n';
    }
    return 0;
}