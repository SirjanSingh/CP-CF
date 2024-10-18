#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    long long int n,m;
    cin>>n>>m;
    long long int a[n],ans[n];
    long long int sum = m,c=0;
    for (int i = 0; i < n; i++)cin>>a[i];

    for (int i = 0; i < n; i++)
    {
        
        if(a[i]<sum){
            ans[i]=0;
            sum=sum-a[i];
        }
        else if(a[i]==sum){
            ans[i]=1;
            sum=m;
        }
        else{
           // cout<<a[i]<<" ";
            ans[i]=(a[i]-sum)/m +1;
            sum= m - (a[i]-sum)%m;
        
        // sum+=a[i];
        // if(sum>=m){
        //     c = sum/m;
        //     sum = sum - m*c;
            
        // }
        }
        cout<<ans[i]<<" ";
    }

    
    

    
    return 0;
}