#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    long long res = (ceil(a/c)*ceil(b/c));
    cout<<res<<'\n';
    return 0;
}