#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define fr(i, x, y) for (int i = x; i > y; i--)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(),vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int,int>
#define mapci map<char,int>

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
        if(s[0] == '1' && s[1] == '0' && s.length() > 2 ) {
            string s2 = s.substr(2);

            int n = stoi(s.substr(2));
            if(n!=0 && n!=1 && s2.length() == to_string(n).length() )yes;
            else no;
        }
        else no;
        
    }
    return 0;
}