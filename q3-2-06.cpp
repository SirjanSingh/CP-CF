#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   int t;cin>>t;
    while(t--){
    int m,n,k;
    cin>>m>>n>>k;
    int a[m],b[n];
    int presentA[k] = {0};
    int presentB[k] = {0};
    for (int i = 0; i < m; i++)
    {
       for(int d:presentA)cout<<d<<" ";
       cout<<'\n';
        cin>>a[i];
        if(a[i] <= k)
        presentA[a[i]-1]++;
       // if(a[i]-1 == 2) cout<<i<<" "<<presentA[a[i]-1]<<'\n';
        }
        cout<<'\n';
    for (int i = 0; i < n; i++)
    {   
       for(int d:presentA)cout<<d<<" ";
       cout<<'\n';
        cin>>b[i];
        presentB[b[i]-1]++;
    }
    sort(a,a+m);
    sort(b,b+n);
    int count  = 0;
    int present[k] = {0};
    
    // for(int i = 1;i<=k;i++){
    //   cout<<binary_search(a,a+m,i)<<" ";
    // }
    cout<<'\n'<<presentA[1]<<'\n';
    for(int i:presentA)cout<<i<<" ";
    cout<<'\n';
    for(int i:presentB)cout<<i<<" ";
    cout<<'\n';
    for(int i=0;i<k;i++){
        if(binary_search(a,a+m,i+1)){ 
            count++;
            present[i]++;
            cout<<i+1<<" ";
        }

        if(count == k/2){
            break;
        }
    }
    if(count<k/2){
        cout<<"NO\n";
        continue;
    }
    cout<<'\n';
    count  = 0;
    for(int i=0;i<k;i++){
        if(present[i]==0){
            if(binary_search(b,b+n,i+1)){ 
              count++;
                present[i]++;
                cout<<i+1<<" ";
            }
        }

        if(count == k/2){
            break;
        }
    }
    if(count<k/2){
        cout<<"NO\n";
        continue;
    }
    else{
        cout<<"YES\n";
    }

    }
    return 0;
}