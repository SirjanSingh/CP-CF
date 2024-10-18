#include <bits/stdc++.h>
using namespace std;
#define x first
#define y second
struct dec
{
    bool operator()(const int &a, const int &b) const
    {
        return a > b;
    }
};

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
        vector<int> a;
        // unordered_set<int> s;
        map<int, int, greater<int>> m;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            int num = 0;
            cin >> num;
            a.push_back(num);
            if (num % 2 == 0)
            {
                c++;
                m[num]++;
            }
            // s.insert(a[i]);
        }
        // cout << c << '\n';
        // sort(a.begin(),a.end());
        if (c == 0)
        {
            cout << "0\n";
            continue;
        }
        else
        {
            c = 0;
            int tempv = 0;
            map<int,int>temp;
            for (auto i : m)
            {
                if(i.x % 2 == 0){
                    c++;
                    m[i.x/2]++;
                }
                // cout << i.first << ' ' << i.second << '\n';
            }
        }

        cout << c << '\n';
    }
    return 0;
}