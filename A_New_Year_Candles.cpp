#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   int a,b;cin>>a>>b;
   int burntCandles = 0;
   while(a>0){
    if(a>=b){
        a = a - b + 1;
        burntCandles+=b;
    }
    else {
        burntCandles+=a;
        break;
    }
   }
    // float c = a/b;
    // int e = round(c);
    // if(e%b != 0 )    cout<<a+e;
    // else    cout<< (e/(double)b) + a+e;
   cout<<burntCandles;
    return 0;
}