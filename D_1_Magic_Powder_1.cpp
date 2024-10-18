#include <bits/stdc++.h>
using namespace std;
#define f(i, x, y) for (int i = x; i < y; i++)
#define ll long long int

typedef struct
{
    ll req;
    ll present;
    ll num;
    ll modnum;

    // ingredients(ll r, ll p) : req(r), present(p) {
    //     num = p / r;
    //     modnum = r - (p % r);
    // }
} ingredients;

bool operator<(const ingredients &lhs, const ingredients &rhs)
{
    return tie(lhs.num, lhs.modnum) < tie(rhs.num, rhs.modnum);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    ingredients a[n];
    f(i, 0, n)
    {
        cin >> a[i].req;
    }
    multiset<pair<ll, ll>> vp;
    multiset<ingredients> mp;
    map<pair<int, int>, int> mpie; //  map wont work as it cant hold mutliple elements
    vector<int>mdnum;
    // contninue form here , update the whole code according to the mutliset of struct and update
    //  the loop also and see why does it not work properly

    ll mn = INT_MAX;
    f(i, 0, n)
    {
        cin >> a[i].present;
        a[i].num = a[i].present / a[i].req;
        a[i].modnum = a[i].req - (a[i].present % a[i].req);

        ingredients temp;
        temp.num = a[i].num;
        temp.modnum = a[i].modnum;
        temp.req = a[i].req;
        mdnum.push_back(a[i].modnum);
        // mpie[{a[i].num,a[i].modnum}] = a[i].req;
        mp.insert(temp);
        vp.insert({a[i].num, a[i].modnum});
        mn = min(a[i].num, mn);
    }
    // sort(vp.begin(),vp.end());
    // for(auto i : mpie)    cout<<i.first.first << " " << i.first.second << " " << i.second <<'\n';
    // for (auto i : mp)
    //     std::cout << i.req << " " << i.num << " " << i.modnum << '\n';
    int i = 0;
    // auto it = (vp.begin());
    // auto it = mpie.begin();
    auto it = mp.begin();
    // std::cout << '\n';
    // cout << k << " " << it->second;
    int yes = 10;
    while (yes)
    {
        if (k < it->modnum)
            break; //->second)
        k -= it->modnum;
        //     // it->first = it->first + 1;
        ll tempreq = it->req;
        ll tempnum = it->num + 1;
        ll tempmodnum = it->req; // - (it->present % it->req);
        // std::cout << '\n'
        //           << tempreq << " " << tempnum << " " << tempmodnum << '\n';
        mp.erase(it);
        ingredients temp;
        temp.num = tempnum;
        temp.modnum = tempmodnum;
        temp.req = tempreq;
        mp.insert(temp);
        // mp.insert({tempreq,0,tempnum,tempmodnum});

            // std::cout<< '\n';
        it = mp.begin();
        //     // for(auto i : mpie)    cout<<i.first.first << " " << i.first.second << " " << i.second <<'\n';
        //     // for(auto i : vp)    cout<<i.first << " " << i.second <<'\n';

        // for (auto i : mp)
        //     std::cout << i.req << " " << i.num << " " << i.modnum << '\n';
        // std::cout << k << ", modnum = " << it->modnum<<'\n';
    }
    // std::cout << '\n';

    mn = INT_MAX;
    for (auto i : mp)
    {

        mn = min(mn, i.num);
        // std::cout << mn << " " << i.num << '\n';
    }
    // std::cout << '\n';

    // for (auto i : a)
    //     cout << i.req << " " << i.present << " " << i.num << " " << i.modnum << '\n';
    // std::cout << '\n';
    std::cout << mn << '\n';
    // khudh likha hai sale, error a rhi thi, cout is ambigious
    return 0;
}