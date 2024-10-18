#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    string x = "auBlbsr";
    int l = s.length();
    if(l<x.length()){
        cout<<"0"<<'\n';
        return 0;
    }
    int a[9]={0};
    for(char ch : s){
        for(int i = 0;i<7;i++){
            if(ch == x[i])  a[i]++;
        }   
    }
    a[0]/=2;
    a[1]/=2;
    sort(a,a+7);
    cout<<a[0];
    return 0;
}