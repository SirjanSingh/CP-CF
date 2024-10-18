#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(NULL);
    //cout.tie(NULL);
   int t;cin>>t;
    while(t--){
    string s;
    cin>>s;
    int c0 = 0, c1=0;
    for(int i : s){
        if(i=='0')    c0++;
        else c1++;
    }
   // cout<<c0<<" "<<c1;
    int l = s.size(),x = 0;
    for(int i :s){
        
        if(i=='1')  c0--;
        else c1--;
        if(c1<0||c0<0) { break;}
        x++;
    }
    cout<<l-x<<'\n';

    }
    return 0;
}