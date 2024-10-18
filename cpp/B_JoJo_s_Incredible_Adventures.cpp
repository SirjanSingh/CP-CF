#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   int t;cin>>t;
    while(t--){
    string s;cin>>s;
    int n = s.size();
    int crmx = 0,mx = -1;
    s=s+s;
    for(int i=0;i<s.size();++i){
        if(s[i] == '1') crmx++;
        else{
            mx = max(mx,crmx);
            crmx = 0;
        }
    }
    mx = max(mx,crmx);
    int req = max(mx,0*1ll); 
    
    // if(s.size() == 1){
    //     if(s[0] == '0') req = 0;
    //     else req = 1;
    // }
    // else{
    //     if(req == 1){
    //         if(s[0] == s[s.size()-1] && s[0] == '1')    cout << 2;
    //         else cout << 1;
    //         cout << '\n';
    //     }
    //     else{
    //         if(req ==2 )    cout << 2;
    //         else    cout << (((req - 2) * 3 ));
    //         cout << '\n';
    //     }

    // }
    // cout << req << ' '; 
    cout << ((req >= n )? n*n : ((req+1)/2) * ((req+2)/2)) << '\n' ;

    }
    return 0;
}