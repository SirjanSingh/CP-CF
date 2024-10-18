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
        int n;
        cin >> n;
        string s;
        cin >> s;
        // auto it = s.find("map");
        // if (it == string::npos)
        //     it = s.find("pie");
        int c = 0;
        // while (it != string::npos)
        // {
        //     c++;
        //     cout<<"it= "<<it<<", ";
        //     if(it == 0) it++;
        //     s.erase(it,1);
        //     cout<<s<<'\n';
        //     it = s.find("map");
        //     if (it == string::npos)
        //         it = s.find("pie");
        // }

        for (int i = 0; i < n - 2; i++)
        {
            if ((s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') ||
                (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p'))
            {
                c++;
                i += 2;
            }
            // cout<<i<<" "<<s[i]<<'\n';
        }
        // cout<<'\n';
        cout << c << '\n';
    }
    return 0;
}