#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for(int i=0 ; i<s.length() ; ++i){
            if(s[i] == '?'){
                s[i] =  ((i!=0)?s[i-1]:'0');
            }
        }
        cout << s << endl;
    }
    return 0;
}