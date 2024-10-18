#include<bits/stdc++.h>
using namespace std;
int isInt(double n){
    return ((n-(int)n)?0:1);
}
int main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   double a,b;cin>>a>>b;
   int c = 0 ; 
   for(int i = 1 ; i <=a;i++){
    double z = b/i;
    if(z <= a && isInt(z)){
        c++;
        //cout<<isInt(z)<<' '<<z<<' '<<i<<'\n';
    }
    //cout<<isInt(z)<<'\n';
   }
  cout<<c;
    return 0;
}