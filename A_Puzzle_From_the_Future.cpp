#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;cin>>s;
        int c = 0;
        int ans[n] = {1} ;
        string b = "1";
        for (int i = 1; i < n; i++)
        {
                if('1' + s[i]  != s[i-1] + ans[i-1] ){
                    b += "1";
                }
                else {
                    b += "0";
                }                
            
               
        }

        // for(int i : ans)    cout<<i;
        
        cout<<b<<'\n';
        
    }

    return 0;
}



