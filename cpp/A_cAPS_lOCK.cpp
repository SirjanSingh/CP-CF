#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   string s1;cin>>s1;
    int l = s1.length();
    char s[l];
    for(int i = 0 ; i < l ;i++){
        s[i] = s1[i];
    }
    int c = 0;
    for(char ch : s){
        if(ch<97) c++;
    }
    if(l == 1){
        if(s[0] >= 97)
        cout<<(char)(s[0]-32);
        else    cout<<(char)(s[0] + 32);
    }
     else if(c == l-1 && c>0){
        int i = 0;
            if(s[0] >= 97){
                for(char ch : s){
                    if(ch>=97 && i == 0){
                        cout<<(char)(ch - 32);
                    }else if( ch <97 && i > 0){
                        cout<<(char)(ch + 32);
                    }
                    i++;
                } 
            }
            else{
                cout<<s1;
             }  // cout<<ch<<" ";
    }else if(c==l && s[0] < 97){
        for(char ch : s){
            cout<<(char)(ch + 32);
        }
    }
    else{
        cout<<s1;
    }
    //cout<<' '<<c<<' '<<l-1<< ' '<< (s[0] >= 97);


    return 0;
}