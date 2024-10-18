#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> st;
        vector <pair<char,char>>a;
        map<char,char>mp;
        vector<char>temp;
        for (char ch : s)
            st.insert(ch);
        for (auto i : st)
            temp.push_back(i);
        // for(auto i : temp)  cout << i ;
        reverse(all(temp));
        // cout << '\n';
        // for(auto i : temp)  cout << i ;
        // cout << '\n';

        int i = 0;
        for(auto j : st){
            a.push_back({temp[i],j});
            mp[temp[i]] = j;
            // cout << temp[i] << ' '<< j << '\n';
            i++;
        }
        // for(auto i : mp){
        //     cout << i.first << '-' << i.second << '\n';
        // }
        for(char ch : s){
            cout << mp[ch];
        }
        cout << '\n';
    }
    return 0;
}