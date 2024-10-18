#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;cin>>t;
    while(t--){
    string s;
    cin>>s;
    string str = "codeforces";
    int c = 0;
    int i = 0;
    for(char ch:s){
        if(ch!=str[i])  c++;
        i++;
    }
    cout<<c<<'\n';
    

    }
    return 0;
}