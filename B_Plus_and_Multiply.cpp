#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define all(vector) vector.begin(),vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n >> a>>b;
    
        if(a==1){
            if((n-1) % b != 0 ) no;
            else yes;
        }
        else{
            bool flag = false;
            int req = 1;
            while(1){
                if(req > n)
                    break;
                if(req % b == n % b){
                    flag = true;
                    break;
                }
                req = req * a;
            }
            if(flag)   yes;
            else no;
            
        }
    }
    return 0;
}