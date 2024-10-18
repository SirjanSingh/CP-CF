#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(), vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int, int>
#define mapci map<char, int>

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> a(n);
        vector<int> ev, od;
        int e = 0, o = 0;
        f(i, 0, n)
        {
            cin >> a[i].x;
            int temp = a[i].x;
            a[i].y = 0;
            if (temp % 2 == 0)
                ev.push_back(temp);
            else
                od.push_back(temp);
        }
        sort(all(a));
        sort(all(ev), greater<int>());
        sort(all(od));
        // f(i, 0, n)
        // {
        //     int temp = a[i].x;
        //     if (temp % 2 == 0)
        //         e = i;
        //     else
        //         o = i;
        // }
        int pa = 0, pb = 0;
        // while (e >= 0 && o >= 0)
        // {
        //     if (a[e].x % 2 == 0)
        //         pb += a[e].x, e--, a[e].y = 1;
        //     else
        //         e--;

        // }
        int x = ev.size();
        int y = od.size();
        int times = 0;

        // cout << pa << ' ' << pb;
        // nl;
        // if (x - y > 0)
        // {
        //     // for (int i = 0; i < y; i++)
        //     // {
        //     //     pb += ev[i * 2];
        //     // }
        //     // for (int i = y * 2; i < x; i++)
        //     //     pb += ev[i];
        //     // for(int i = 1;i<x;i+=2){
        //     //     pa+=ev[i];
        //     int req = y;
        //     // }
        //     f(i, 0, x)
        //     {
        //         // cout <<req << ',';
        //         if (i % 2 != 0 && req > 0)
        //         {
        //             pa += ev[i];
        //             // cout << ev[i] << ' ' << i << '\n';
        //             req--;
        //             continue;
        //         }
        //         pb += ev[i];
        //     }
        // }
        // else if (x == y)
        // {
        //     for (int i = 0; i < x; i++)
        //     {
        //         if (i % 2 != 0)
        //         {
        //             pa += ev[i];
        //             continue;
        //         }
        //         pb += ev[i];
        //     }
        // }
        // else
        // {
        for (auto i : od)
            pa += i;
        int i = 0;
        for (i = 0; i < y; i++)
        {
           while(!ev.empty())
            {
                if (i % 2 != 0){
                    pa += ev[i];
                    ev.pop_back();
                }
                else{
                    pb += ev[i];
                    ev.pop_back();
                }
                    // cout << ev[i] << ' ';
                    i++;
            }
        // cout << pa << ' ' << pb;
        }
        // nl;
        // i/=2;
        // cout << i ;
        x=ev.size();
        f(j, 0, x)
        {
            pb += ev[j];
        }
        // }
        // bool flg = false;
        // while(e<x||o<y){
        //     if(flg){
        //         if(e<x && o<y) pa+=ev[e++];
        //         if(o<y) pa+=od[o++];
        //     }else{
        //         if(e<x) pb+=ev[e++];
        //     }
        //     cout << e << ' ' << o << '\n';
        // nl;
        //     flg=!flg;
        // }
        // nl;nl;

        // f(i,0,y){

        // }
        cout << pa - pb;
        // nl;
        nl;
    }
    return 0;
}