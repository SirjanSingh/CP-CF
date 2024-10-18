#include<bits/stdc++.h>
 using namespace std;

 int main(){
    int n;
    cin>>n;
    int a[n];
    int like[n] = {0};
    for(int i = 0; i < n; i++){
        cin>>a[i];
        //like[a[i]-1] = 0;
        like[a[i] - 1]++;
        }
    //cout<<like[1];
    for( int i : like){
     cout<<i<<'\n';
       
    }
    // for(int i = 0;i < n;i++){
    //     for(int j = 0; j < n;j++){
    //         if(a[i] == (j+1))   like[a[i] - 1] = 
    //     }
    // }

    
    

    return 0;
 }
