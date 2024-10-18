#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(),vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s; cin >> s;
        // int l = s.length();
        int c0 = 0,c1 =0;
        for(auto ch : s)    if(ch == '0')c0++;else c1++;
            int l = min(c0,c1);
            cout << ((((l) % 2 != 0) ? "DA" : "NET"));
            cout << '\n';
        // if(l % 2 == 1){
        // }else{

        // }
    }
    return 0;
}