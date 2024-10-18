#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   int t;cin>>t;
    while(t--){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a;
    vector<int>b;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin>>temp;
        b.push_back(temp);
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i] + b[j] <= k)    c++;
        }
        
    }
    cout<<c<<'\n';
    
    
    

    }
    return 0;
}