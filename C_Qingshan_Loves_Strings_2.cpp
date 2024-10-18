#include <bits/stdc++.h>
using namespace std;

void pop_front(string &str)
{
    if (!str.empty())
    {
        str.erase(str.begin());
    }
}

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
        int zero = count(s.begin(), s.end(), '0');
        int one = count(s.begin(), s.end(), '1');
        // cout<<zero << " " << one << '\n';
        if (zero != one)
        {
            cout << "-1\n";
            continue;
        }
        else
        {
            vector<int> f, b;
            int fi = 0, bi = n;
            int count = 0;
            while (s != "")
            {
                // cout << s << '\n';
                // cout<<fi << " "<< bi<<'\n';
                if (s[0] == s.back()){
                if (s[0] == '0')
                {
                    s += "01";
                    f.push_back(n - fi);
                    count++;
                }
                else
                {
                    s = "01" + s;
                    f.push_back(fi);
                    count++;
                }
                n = n + 2;
                }

                else
                {
                    // cout << '\n';
                    while (!s.empty() && s[0] != s.back())
                    {
                        // s = s.substr(1, s.size() - 2);
                        s.pop_back();
                        s = s.substr(1, s.size() - 1);
                        // cout << s << '\n';

                        fi++;
                        // bi++;
                    }
                    // cout<<'\n';
                }
            }
            cout << count << '\n';
            // sort(f.begin(), f.end());
            for (auto i : f)
                cout << i << " ";
            cout << '\n';
        }
    }
    return 0;
}