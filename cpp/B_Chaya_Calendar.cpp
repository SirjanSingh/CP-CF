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
    int occ = a[0];
    int check = a[0] + 1;
    int index = 1;
    int yay = 0;
    for(int i = check;i > 0; i++){
      cout<<check<<" "<<index<<" "<<a[index]<<" "<<i<<'\n';
        if(i % a[index] == 0){
            cout<<"YAY "<<check<<" "<<index<<" "<<a[index]<<" "<<i<<'\n';
            //check = a[index] + 1;
            index++;
            yay++;
        }
        if(yay == n-1){ occ = i; break;}
        
    }
    cout<<'\n';
    

    }
    return 0;
}