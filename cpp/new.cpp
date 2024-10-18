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
    int ca=0,cb=0;
    for(char ch : s){
        if(ch == 'A') ca++;
        else cb++;
    }
    cout<< ((ca>cb)?'A':'B')<<'\n';

    }
    return 0;
}