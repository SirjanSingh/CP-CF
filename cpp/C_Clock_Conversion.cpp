#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   int t;cin>>t;
    while(t--){
    string s;cin>>s;
    int h = stoi(s.substr(0,2));
    int m = stoi(s.substr(3,2));
    if(h<12){
        if(h==0)    cout<<"12:"<<((m>=10)?to_string(m):("0"+ to_string(m)))<<" AM";
        else if(h<10)    cout<<"0"<<h<<":"<<((m>=10)?to_string(m):("0"+ to_string(m)))<<" AM";
        else cout<<h<<":"<<((m>=10)?to_string(m):("0"+ to_string(m)))<<" AM";

    }
    else{
        if(h==12)    cout<<"12:"<<((m>=10)?to_string(m):("0"+ to_string(m)))<<" PM";
        else if(h<22)    cout<<"0"<<h-12<<":"<<((m>=10)?to_string(m):("0"+ to_string(m)))<<" PM";
        else cout<<h-12<<":"<<((m>=10)?to_string(m):("0"+ to_string(m)))<<" PM";
    }
    // cout<<h<<' '<<m;
    cout<<'\n';
    }
    return 0;
}