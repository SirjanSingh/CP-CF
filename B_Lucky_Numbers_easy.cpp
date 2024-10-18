#include<bits/stdc++.h>
using namespace std;

int check(int num) {
    string str = to_string(num);
    double l = str.length();
    double x = ceil(l/2);
    int c4 = 0,c7 = 0;
    //for(int i =)
    for(int i = num;i< 777444;){
        
        for (char c : str) {
        if (c == '4') {
            c4++;
        } else if (c == '7') {
            c7++;
        }
         }if(c4==x && c4==c7) return i;
         else{
             //cout<<str<<' '<<c4<<' '<<c7<<'\n';
             i++;
             str = to_string(i);
         }c4=0,c7=0;
    }
    //   return num;
    // else{return check(++num);}
    
    //return (c4 == c7);
}
int main(){
   //int n;cin>>n;
   for(int i  = 0;i<10000;i++)cout<<i<<"->"<<check(i)<<'\n';
//   if(n<777444){
//         cout<<check(n);
//   }
    



    return 0;
}