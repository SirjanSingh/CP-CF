#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   int t;cin>>t;
    while(t--){
    int n,m,x;
    cin>>n>>m>>x;
    vector<int>a;
    vector<int>b;

    for (int i = 0; i < m; i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
        char temp2;
        cin>>temp2;
        b.push_back(temp2);
    }

    for(int i:a)cout<<i<<' ';
    cout<<'\n';
    for(char i :b)cout<<i<<' ';
    cout<<'\n';

    int c[n] = {0};

    




    
    

    }
    return 0;
}