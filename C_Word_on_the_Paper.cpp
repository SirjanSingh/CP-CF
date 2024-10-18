#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;cin>>t;
    while(t--){
    string s1,s2,s3,s4,s5,s6,s7,s8;
    cin>>s1>>s2>>s3>>s4>>s5>>s6>>s7>>s8;
    string s = s1+s2+s3+s4+s5+s6+s7+s8;
    for(char ch : s){
        if(ch!='.') cout<<ch;
    } 

    // for(char ch : s2){
    //     if(ch!='.') cout<<ch;
    // } 
    // for(char ch : s3){
    //     if(ch!='.') cout<<ch;
    // } 
    // for(char ch : s4){
    //     if(ch!='.') cout<<ch;
    // } 
    // for(char ch : s5){
    //     if(ch!='.') cout<<ch;
    // }  
    // for(char ch : s6){
    //     if(ch!='.') cout<<ch;
    // }
    // for(char ch : s7){
    //     if(ch!='.') cout<<ch;
    // } 
    // for(char ch : s8){
    //     if(ch!='.') cout<<ch;
    // }   
    cout<<'\n';
    }
    return 0;
}