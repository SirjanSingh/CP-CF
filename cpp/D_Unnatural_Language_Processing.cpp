#include<bits/stdc++.h>
using namespace std;

//leave this quesiton i wont do this shit im done for

int main(){
   int t;cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;cin>>s;
    string str=" ";
    int flag = 0;
    if(n<4){
        cout<<s<<'\n';
        continue;
    }else{
        for(int i = 0;i<n-3;i++){
            if(s[i+3]=='a'||s[i+3]=='e'){
                // cout<<s[i]<<s[i+1];
                str.append({s[i],s[i+1]});
                i+=1;
                flag = 0;
                cout<<flag<<str<<'\n';
            }else{
                // cout<<s[i]<<s[i+1]<<s[i+2];
                str.append({s[i],s[i+1],s[i+2]});
                i+=2;
                flag = 1;
                cout<<flag<<str<<'\n';
            }
        
            // cout<<".";
            str.append(".");
        }

    }int i = 0;
    // for(char ch:str){
    //     i++;
    //     if(ch!=' '&&i<str.length()-1) {cout<<ch;}
    // }
    str.pop_back();
    if(flag == 0)
     str.pop_back();
    //str = str.trim();
    cout<<flag<<" 69";
    cout<<str<<"69"<<'\n';
    

    }
    return 0;
}