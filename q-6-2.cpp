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
    int i = 0;
    int start = 0,end = 0;
    for(int i = 0;i<n;i++){
      if(s[i] == 'B'){
        start = i;
       // cout<<i<<'\n';
        break;
      }
     // cout<<s[i]<<' ';
    }
    i=n;
    while(i--){
      if(s[i] == 'B'){
        end = i;
        break;
      }
    }
   // end = n-end;
   end++;
    cout<<((end-start)?end-start:1)<<'\n';//<<end<<' '<<start<<'\n';

    }
    return 0;
}