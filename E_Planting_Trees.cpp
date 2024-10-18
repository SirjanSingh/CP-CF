#include<bits/stdc++.h>
 using namespace std;

 int main(){
    int t;
    cin>>t;
    while(t--){
        int x ;
        cin>>x;
        if(x>4){
            int ans = 2*x + 1;
        }else{
            if(x==1){
                cout<<"3"<<'\n';
            }else if(x==2){
                cout<<"9"<<'\n';
            }else if(x==3){
                cout<<"4"<<'\n';
            }else if( x == 4){
                cout<<"17"<<'\n';
            }
        }
    }
    
    return 0;
 }
