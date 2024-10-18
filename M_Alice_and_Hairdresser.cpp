#include <bits/stdc++.h> 
using namespace std; 

#define ll long long int 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);       

    int sz, q, lim; cin>>sz>>q>>lim;
    vector<int> x(sz+3), y(sz+3);
    for (int i=1;i<=sz;i++){ 
        cin>>x[i]; 
        y[i]=(x[i] > lim);
    }

    int ct=0;
     for (int i = 1; i <= sz; ++i) 
     if (y[i] && !y[i-1]) ct++; 

    while(q--)  {
        int op; cin >> op;
         if(!op) cout<<ct<<'\n';  
          else {
            int pos, val; cin >> pos >> val;
             if(y[pos]) continue; x[pos]+= val; 
                if (x[pos] > lim) {
                y[pos]=1; ct++; 
                if (y[pos-1]) ct--; if (y[pos +1])ct--; 
            }
        } 
    }
    return 0;
} 
