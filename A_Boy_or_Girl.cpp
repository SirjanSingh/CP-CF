#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int l = s.length();
    set<char>st;
    for(char ch  :s){
        st.insert(ch);
    }
    if(st.size()%2 == 0) cout << "CHAT WITH HER!";
    else    cout << "IGNORE HIM!";
    return 0;
}