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

    int n, x;
    cin >> x >> n;

    vector<int> a(n);
    vector<int> b(n);
    vector<pair<int, int>> ans;
    map<int, int> mp;
    f(i, 0, n)
    {
        cin >> a[i];
        cin >> b[i];
        int temp = a[i];
        // mp[a[i]] = b[i];
        ans.push_back({a[i], b[i]});
    }
    int health = x;
    int flag = false;
    sort(all(ans));
    // int s = ans.size();
    // cout << s << ' ';
    auto it = 0; // mp.begin();
    if (health <= ans[0].first)
    {
        no;
    }
    else
    {
        for (auto i : ans)
        {
            if (health <= i.first)
            {

                break;
            }
            else
            {
            it++;
                health += i.second;
            }
        }
        // for(auto i  : mp){
        //     it++;
        //     if(health <= i.first){

        //         break;
        //     }else{
        //         health += i.second;
        //     }
        // }
        if (it == n)
            yes;
        else
            no;
    }

    return 0;
}