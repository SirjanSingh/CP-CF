#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
    string s;cin>>s;
        int l = s.length();
        int a[26]={0};
        for(char ch:s){
            a[ch-'a']++;
        }
        int x = 0;
        for(int i:a)    {
            if(i>1){
                x++;
            }
        }
        if(x>1) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
       // cout<<'\n';
    }
    return 0;
}