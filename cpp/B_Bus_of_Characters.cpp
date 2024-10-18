#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()
#define x first
#define y second

typedef struct ans
{
    int x;
    int y;
    // int z;

} ans;
    struct AnsComparator
    {
        bool operator()(const ans &a1, const ans &a2) const
        {
            if (a1.x != a2.x)
            {
                return a1.x < a2.x;
            }
            else
            {
                return a1.y > a2.y;
            }
            
        }
    };
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> a;
    map<ans, int,AnsComparator> mp;
    map<pair<int,int>,int,greater<pair<int,int>>>v1;
    map<pair<int,int>,int>v2;
    f(i, 0, n)
    {
        int temp;
        cin >> temp;
        ans t;
        t.x = temp;
        t.y = 0;
        // t.z = 0;
        a.push_back({temp, i + 1});
        mp[t] = i+1;
        // pair<int,int> x1 = make_pair(temp,i+1);//make_pair(t,i+1);
        v1[{temp,i+1}] = 0;
        v2[{temp,i+1}] = 0;
        // cout << temp << ' ' << i << '\n';
    }
    string s;
    cin >> s;
    std::sort(all(a));
    // cout << s;

    int l = 0;
    int r = 0;
    auto it1 = v1.begin(); 
    auto it2 = v1.rbegin();
    int occ1 = 0, occ0 = 0;
    for (char c : s) {
        for(auto k : v1)    cout << k.first.first << ' ' << k.x.y << ' ' << k.y<< '\n';
        cout << '\n';
        for(auto k : v2)    cout << k.first.first << ' ' << k.x.y << ' ' << k.y<< '\n';
        if (c == '1') {
            while (it1 != v1.end() && it1->second == 0) {
                it1++;
            }
            if (it1 != v1.end()) {
                cout << it1->first.y << ' ';
                it1->second = 1; // Mark as used
                it1++;
                occ1++;
            }
        } else {
            while (it2 != v2.rend() && it2->second != 0) {
                it2++;
            }
            if (it2 != v2.rend()) {
                cout << it2->first.y << ' ';
                it2->second = 1; // Mark as used
                it2++;
                occ0++;
            }
        }
        cout << '\n' << '\n';
    }
    // for (char i : s)
    // {
    //     if (i == '1')
    //     {
    //         int m;
    //         for(auto j : v1){
    //             if(j.y  != 0 ) {
    //                 m = j.x.y;
    //                 break;
    //             }
    //         }
    //         cout << m << ' ';
    //         // it1->first.second = 1;
    //         it1++;
    //     }
    //     else
    //     {
    //         int m;
    //         for(auto j : v2){
    //             if(j.y  == 0 ) {
    //                 m = j.x.y;
    //                 break;
    //             }
    //         }
    //         cout << m << ' ';
    //         // cout << it2->second << ' ';
    //         // it2->first.second = 1;
    //         it2++;
    //     }
    // }

    return 0;
}