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
    while(t--){
        int n,k,b,s;
        cin>>n >> k >> b >> s;
        int mn = k*b;
        int mx = mn + (k-1)*n;
        if(s>=mn&&s<=mx){
            int extra = s - mn;
            int plus = 0;
            f(i,0,n){
                if(extra > 0){
                    if(extra >=k-1){
                        plus = k-1;
                        extra -=k-1;
                    }
                    else{
                        plus = extra;
                        extra -= plus;
                    }
                }
                if(i == n-1)
                    cout << ((plus == 0)? 0 : plus) + mn << ' ';
                else
                    cout << plus << ' ' ;
                plus =  0;
                
            }
            cout << '\n';
        } else  
            cout << "-1\n";

    }
    return 0;
}