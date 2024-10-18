#include<bits/stdc++.h>
using namespace std;
int main(){
   
    int n,m;
    cin>>n>>m;
    char s = 'l';
   for (int i = 1; i <= n; i++)
   {
    if(i%2!=0){
        for (int j = 0; j < m; j++)
        {
            cout<<"#";
        }
    }
    else {
        if(s=='f') {  cout<<"#";}
        for (int j = 0; j < m-1; j++)
        {
            cout<<".";
        }
        if(s=='l') {  cout<<"#"; s = 'f';}

        
    }
    if(i%4==0)  s = 'l';
    cout<<'\n';
   }
   

    
    return 0;
}