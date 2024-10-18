#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int l = s.length();
    int i = 0;
    string check = "hello";
    int c = 0;
    for ( i = 0; i < l; i++){
        if(s[i] == check[c]){
            c++;
        }
    }if(c==5)   cout<<"YES";
    else   cout<<"NO";
    


    return 0;
}