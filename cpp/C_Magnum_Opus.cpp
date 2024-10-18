#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   int t = 5;
   int a[5];
   int i = 0;
    while(t--){
         cin>>a[i];  i++;
    }

    cout<< min({a[0],a[1],a[2]/2,a[3]/7,a[4]/4});
    return 0;
}