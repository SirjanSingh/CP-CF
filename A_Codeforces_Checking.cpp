#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int t;cin>>t;
 while(t--){
   char ch;cin>>ch;
   string s = "codeforces";
    int c = 0;
    for(char i : s){
        if(i == ch)c++;
    }
    if(c!=0)    cout<<"YES\n";
    else    cout<<"NO\n";

 }


    return 0;
}