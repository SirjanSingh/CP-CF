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

    int n;
    cin >> n;

    vector<int> a(n);

    f(i, 0, n)
    {
        cin >> a[i];
        int temp = a[i];
    }
    multimap<int, vector<int>> mp;
    pair<int, int> mx = {INT_MIN, 0};
    for (int i : a)
    {
        vector<int> vec;
        int sumie = 0;
        for (int j : a)
        {
            if (j % i == 0)
            {
                vec.push_back(j);
                sumie += j;
            }
        }
        // cout << mx.first << " " << mx.second
        //      << '\n';
        // cout << sumie << '\n'<<'\n';

        if (mx.second < sumie)
        {
            mx.first = i;
            mx.second = sumie;
        }
        sumie = 0;
        mp.insert({i, vec});
    }
    vector<int> pro;
    // cout << mx.first << " " << mx.second << '\n'
        //  << '\n';
    // auto it = a.begin();
    // while(it == a.end()){
    //     if(*it%mx.first == 0){
    //         a.erase(*it);
    //         it = a.begin();
    //     }
    // }
    int uhm = mx.first;
    // for (int i : a)
    //     cout << i << " ";
    // cout << '\n';
    auto it = remove_if(a.begin(), a.end(), [uhm](int x)
                        { return x % (uhm) == 0; });
    a.erase(it, a.end());
    for (int i : a)
        cout << i << " ";
    cout << '\n'
         << '\n';
    pair<int, int> mx2 = {INT_MIN, 0};
    for (int i : a)
    {
        // vector<int> vec;
        int sumie = 0;
        for (int j : a)
        {
            if (j % i == 0)
            {
                // vec.push_back(j);
                sumie += j;
                cout << j << ' ' << sumie << '\n';
            }
        }
        cout << '\n';
        // cout << mx.first << " " << mx.second
        //      << '\n';
        cout << sumie << '\n'<<'\n';

        if (mx2.second < sumie)
        {
            mx2.first = i;
            mx2.second = sumie;
        }
        sumie = 0;
        // mp.insert({i, vec});
    }
    // cout << mx2.first << " " << mx2.second << '\n'
        //  << '\n';
    // for (auto i : mp)
    // {
    //     int temp = 0;
    //     for (auto j : i.second)
    //     {
    //         cout << j << ' ';
    //         temp += j;
    //     }
    //     cout << '\n';
    //     pro.push_back(temp);
    // }
    // for (int i : pro)
    //     cout << i << " ";
    // cout << '\n';
    // sort(pro.begin(), pro.end(), greater<int>());
    // for (int i : pro)
    //     cout << i << " ";
    // cout << '\n';

    // cout << pro[0] - ((pro[0] != pro[1]) ? pro[1] : 0);
    cout << mx.second - mx2.second;

    return 0;
}