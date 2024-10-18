#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   int t;cin>>t;
    while(t--){
    int n;
    cin>>n;
    int m; cin >> m;
    string s;cin>>s;
    map<char,int>mp;
    mp['A'] = 0;
    mp['B'] = 0;
    mp['C'] = 0;

  mp['D'] = 0;
  mp['E'] = 0;
  mp['F'] = 0;
  mp['G'] = 0;
    for(char i : s) mp[i]++;

    int ans = 0;
    for(auto i : mp){
        // cout << i.second << ' ';
        if(i.second < m)    ans+=m-i.second;
    }
    // cout << '\n';
    cout << ans << '\n';
    

    }
    return 0;
}