#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
    cin>>s;
    for(char& c :s){ c = tolower(c);}
    
    for(char& c: s){

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')   continue;
        else cout<<"."<<c;
    }
    
    return 0;
}