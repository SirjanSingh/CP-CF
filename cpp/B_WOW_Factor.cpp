#include <bits/stdc++.h>
using namespace std;
#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES"
#define no cout << "NO"

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int l = s.length();
    // string str = "";
    vector<char>str;
    f(i,0,l-1){
        if(s[i] == 'o') str.push_back('o');
        if(s[i] == 'v' && s[i+1] == 'v'){    str.push_back('w'); if(s[i+2] != 'v') i++;}
        else if( s[i] == 'v' && s[i+1] != 'v') str.push_back('v');
    }

    // for(char ch : str) cout << ch;
    vector<int>ans;
    int c = 0;
    f(i,0,str.size()){
        if(str[i] == 'w') c++;
        else {
            if(c!=0)
                ans.push_back(c);
            c = 0;
        }
    }
    if(c!=0 )   ans.push_back(c);
    int pro = 1;
    for(int i : ans) cout << i << ' ';
    cout << '\n' << '\n';

    //editorial wala code 
    int a = 0, b = 0; c = 0;    
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'o') {
            b += a;cout << "IM IN IF   ";
        } else if (i > 0 && s[i-1] == 'v') {
            a++;
            c += b;
            cout << "IM IN ELSE ";
        }
        cout  << a << ' ' << b << ' '  << c << '\n';
    }
    cout << c << endl;
    // cout << pro;
    return 0;
}