#include<bits/stdc++.h>
using namespace std;

int main(){
   
    int n;
    cin>>n;
    int a[] ={1, 6, 28, 120, 496, 2016, 8128, 32640} ;
    int m = 0;
    for(int i : a){
        if(n%i==0){
            if(m<i)
            m = i;
        }
    }
    cout<<m;
    
    return 0;
}