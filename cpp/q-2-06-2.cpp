#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   int t;cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int freq[n] = {0};

    for(int i:a){
        freq[i]++;cout<<freq[i]<<" ";
        //cout<<((char)(a+(char)(freq[i])))<<'\n';
    }cout<<'\n';
    
    

    }
    return 0;
}