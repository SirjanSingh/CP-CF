#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        double n;cin>>n;
        long long res = floor((n-1)/2);
        cout<<res<<'\n';
    }
    return 0;
}