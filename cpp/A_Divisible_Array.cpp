#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //int a[n];
        cout<< (  n - ((n*(n+1))/2 - 1)%n)<<" ";
        for(int i = 2;i <= n; i++){
            cout<<i<<" ";
        }

        
    }

    return 0;
}