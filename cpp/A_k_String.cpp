#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()
#define nl cout << '\n'

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin >> k;
    string s;
    cin >> s;
    int l = s.length();
    map<char,int>mp;
    for(char ch : s)    mp[ch]++;
    bool flag = false;
    // for(auto i : mp)    cout << i.first << ' ' << i.second << '\n';
    for(auto i : mp){    if(i.second%k != 0) flag = true;}
    if(flag)    cout << "-1" ;
    else{
        f(i,0,k)
            for(auto ch : mp)  
                f(j,0,ch.second/k)
                    cout << ch.first;
    }
    return 0;
}
// handle the case fo duplicates 
