#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   int t = 2;
   string s1,s2;
    cin >> s1 >> s2 ;
    // int t1[s1.length()/2] = {0},t2[s2.length()/2]={0};
    // int i = 0;
    // for(char ch : s1){
    //     if(ch == '[') {
    //         t1[i]++;
    //         i++;
    //     }
    // }
    int score1 = 0,score2 = 0;
    int l = s1.length();
    for (int i = 0; i < l; i++)
    {
        if(s1[i] == s2[i])  continue;
        else if(s1[i] == '8'){
            if(s2[i] == '[')    score1++;
            else    score2++;
        }else if(s1[i] == '['){
            if(s2[i] == '(')    score1++;
            else    score2++;
        }else if(s1[i] == '('){
            if(s2[i] == '8')    score1++;
            else    score2++;
        }
    }
    cout<<((score1==score2)?"TIE":(score1>score2)?"TEAM 1 WINS":"TEAM 2 WINS")<<endl;
    //cout<<score1<<" "<<score2;
    return 0;
}