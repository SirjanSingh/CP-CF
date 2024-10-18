#include<bits/stdc++.h>
using namespace std;


#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()
#define pb push_back

signed main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   int t;cin>>t;
    while(t--){
    string s;cin>>s;
    int n = s.length();
    if(s[0] != s[n-1])  s[0] = s[n-1];
    cout << s << '\n';
    }
    return 0;
}