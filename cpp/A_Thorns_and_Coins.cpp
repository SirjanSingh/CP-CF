#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   int t;cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;cin>>s;
    int ct = 0,cc = 0;
    for(char ch: s){
        if(ch == '@')   cc++;
        if(ch == '*')   ct++;
        else    ct = 0;
        if(ct == 2) break;
    }
    cout<<cc<<'\n';

    }
    return 0;
}