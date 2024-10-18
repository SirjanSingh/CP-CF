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
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        int mx = max(n, m);
        string temp = s1;
        int c = 0;
        size_t tempo = s1.find(s2);
        if (s1 == s2 || tempo != string::npos)
        {
            cout << "0\n";
            continue;
        }
        // cout<< temp << "   "<<s2<<'\n';

        bool flag = false;
        // mx = 25/n;
        string maybe = "";
        //maybe.append(s2[0] + s2[m-1]);
        // if (s2.find(s1) != string::npos)
        // {
            do {
                temp.append(temp);
                // cout<< temp << "   "<<s2<<'\n';
                size_t fini = temp.find(s2);
                c++;
                if (fini != string::npos)
                {
                    flag = true;
                    cout << c << '\n';
                    break;
                    // c = -1;
                }
            }while(temp.length() <= 2*s2.length());
        // }else{

        // }
        temp = "";
        if (!flag)
        {
            cout << "-1\n";
        }
    }
    return 0;
}