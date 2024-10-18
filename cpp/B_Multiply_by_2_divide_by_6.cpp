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
    

        int ans = 0;
        while(true){
            if(n%6==0 ){
                ans++;
                n=n/6;
            }
            else if((2*n)%6==0){
                n=2*n;
                ans++;
            }
            else{
                if(n!=1) ans = -1;
                break;
            }
        }
        cout << ans  << '\n';
    }
    return 0;
}