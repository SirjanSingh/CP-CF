#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;cin>>t;
    while(t--){
    int n,x;
    cin>>n>>x;
    int a[n];
    int diff = 0;
    int maxDiff = 0;
    for (int i = 0; i <= n; i++)
    {
        if(i!=n)
        cin>>a[i];
        // if(i>0){
            
            if(i==n)  diff = x - a[n-1];
            else if(i==0)   diff = a[i];
            else    diff = a[i]-a[i-1];
            if(diff>maxDiff){
                maxDiff = diff;
            }
        
    }
    // for()
    cout<<maxDiff<<'\n';
    
    

    }
    return 0;
}