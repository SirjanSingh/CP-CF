#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   int t;cin>>t;
    while(t--){
    string s;cin>>s;
    int ca = 0,cb = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'a' )    ca++;
        else    cb++;
    }
    if(ca == cb)    cout<<"YES\n";
    else    cout<<"NO\n";

    }
    return 0;
}