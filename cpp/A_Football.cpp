#include<bits/stdc++.h>
using namespace std;


int main(){
    int x;cin>>x;
    string s[x];
    string str ;
    for (int i = 0; i < x; i++)
    {
        cin>>s[i];
    }
    int c1=0,max = -1;
    if(x==1)    cout<<s[0];
    else{
        for(int i = 0;i<x;i++){
            for (int j = 0; j < x; j++)
            {
                if(s[i].compare(s[j])==0)   c1++;
            }
            if(c1>max){
                str = s[i];
                max  =  c1;
            }
           // cout<<s[i]<<" : "<<c1<<'\n';
            c1 = 0;
        }
    }
    cout<<str<<'\n';
    
    
    return 0;
}