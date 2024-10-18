#include<bits/stdc++.h>
using namespace std;
int main(){
    
        int n;cin>>n;
        int s[2];
        int e[2];
        cin>>s[0]>>s[1]>>e[0]>>e[1];
        string str; 
        cin>>str;
        int diffx = s[0]-e[0];
        int diffy = s[1]-e[1];
        char chx,chy;
        if(diffx<0){
            chx='E';
        }else{
            chx='W';
        }
        if(diffy<0) chy='N';
        else        chy='S';
        int ans = 0;
        diffx = abs(diffx);
        diffy = abs(diffy);
        for (int i = 0; i < str.length(); i++)
        {   
            if(str[i]==chx) diffx--;
            if(str[i]==chy) diffy--;

            if(diffx<1&&diffy<1){
                ans = i+1;
                break;
            }
            //write code to check for each directio
            // and then add a counter to it to taek record when it reacehd tehre in minimumn chances
            
        }
        if(ans==0) cout<<"-1";
        else    cout<<(ans)<<'\n';
        

    
    return 0;
}