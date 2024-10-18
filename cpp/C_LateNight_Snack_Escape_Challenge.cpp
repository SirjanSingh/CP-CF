#include<bits/stdc++.h>
 using namespace std;

 int main(){
    int n;
    cin>>n;
    int a[n];
    int like[n] = {0};
    int max = 0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        //like[a[i]-1] = 0;
        like[a[i] - 1]++;
        if(max < like[a[i]-1]){
             max = like[a[i]- 1];
        }
     }
  
    int no[n];
    fill_n(no, n, max);
    for(int i : a ){
         if(like[i-1] == 0)   continue;
          no[i-1]--;
          if(no[i-1] == 0){
               cout<<i<<'\n';
               break;
          }
     }
   

    
    

    return 0;
 }

 if(t){
     cout<<
 }else{
     cout<<;
 }
