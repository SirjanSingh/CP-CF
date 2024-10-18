#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;cin>>n;
   int sx=0,sy=0,sz=0;
    while(n--){
    int x=0,y=0,z=0;
    cin>>x>>y>>z;
    sx+=x;
    sy+=y;
    sz+=z;

    }
   // cout<<sx<<" "<<sy<<" "<<sz;
    if(sx==0&&sy==0&&sz==0) cout<<"YES";
    else    cout<<"NO";
    return 0;
}