#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;cin>>n;
   int set[] = {4,7,47,74,44,77,444,447,474,744,477,774,777};
    int c = 0,i = 0;
    for( i = 0;i<13;i++){
        if(n%set[i]==0)  c++;
    }
    if(c!=0)    cout<<"YES";
    else    cout<<"NO";

    return 0;
}