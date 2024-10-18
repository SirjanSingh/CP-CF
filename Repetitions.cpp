#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int l = s.length();
    int cur =0,mx=-1;
    for(int i = 0;i<l-1;i++){
        // cout << s[i] << ';' << s[i+1] << ' ' << cur;
        // cout << '\n';
        if(s[i] == s[i+1]) cur++;
        else {
            mx=max(cur,mx);
            cur=0;
        }
    }
            mx=max(cur,mx);

    cout << mx+1;
    return 0;
}