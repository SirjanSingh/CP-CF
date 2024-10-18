#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    int cp =n;
    while(n--){
         for(int i = 97;i < 97+k;i++){
               cout<<(char)i;
          }
     }cout<<'\n';
    }
    return 0;
}