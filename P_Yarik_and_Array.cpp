#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i,x,y) for(int i = x;i < y; i++)
int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int t;
     cin>>t;
     while(t--){
          int n;
          cin>>n;
          vector<ll>a(n);
          f(i,0,n){
               cin>>a[i];
          }
          int parity,flag = 0;
          ll sum  = a[0];
          ll mn = min((ll)0,sum);
          int first = 1;
          ll mxsum = INT_MIN;
          parity = ((a[0]%2==0)?0:1);
          ll ans = a[0];
    
          f(i,1,n){
            //    cout<<"IM "<<a[i]<<" and im in ";
                    // if((a[i]%2==0 && parity==0 || parity == -1) ){
                    //      parity = 1;
                        if (abs(a[i] % 2) == abs(a[i - 1] % 2)) {
                            mn = 0;
                            sum = 0;
                        }
                    //      sum+=a[i];
                    //      // flag = 1;
                    //     //  cout<<"even cond.\n";
                    //      // continue;
                    //      if(i<n-1 && a[i+1]%2==0){
                    //         parity = 0;
                    //         mxsum = max(mxsum,sum);
                    //         sum = 0;
                    //         continue;
                    //      }
                    // }
                    sum += a[i];
                    ans = max(ans, sum - mn);
                    mn = min(mn, sum);
                    // else if((a[i]%2!=0 && parity==1 || parity == -1) ){
                    //          parity = 0;
                    //      sum+=a[i];
                    //      // flag =1;
                    //     //  cout<<"odd cond.\n";
                    //      if(i<n-1 && a[i+1]%2!=0){
                    //         parity = 1;
                    //         mxsum = max(mxsum,sum);
                    //         sum = 0;
                    //         continue;
                    //      }
                    //      // continue;
                    
               
            //              else {  parity = -1;
            //    cout<<"no cond.\n";}
                    mxsum = max(mxsum,sum);
               
               
          }
          cout<<ans<<'\n';
     }
     return 0;
}