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

        f(i, 0, n)
        {
             cin >> a[i];
        }
        bool flag = false;
        for(auto i : a)
            for(auto j : a)
                if(__gcd(i,j) <= 2){
                    flag = true ; 
                    break;
                }
        if(!flag)    no;
        else yes;
    }
    return 0;
}