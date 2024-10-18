#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()
#define x first
#define y second
#define nl cout << '\n';
#define pb push_back
#define pob pop_back
#define mapii map<int, int>
#define mapci map<char, int>

bool comapre(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first == b.first) {
        return a.second > b.second; 
    }
    return a.first < b.first;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;

        vector<pair<int, int>> a(n);

        f(i, 0, n)
        {
            int t1;
            cin >> t1;
            a[i].second = t1;
        }
        f(i, 0, n)
        {
            int t1;
            cin >> t1;
            a[i].first = min(t1,p);
        }
        sort(all(a));
        // for(auto i : a) cout <<i.x << ' '<<i.y << '\n';
        // nl;
        int tot = p;
        int rem = n-1;
        int l = 1,r = n-1;
        // while(1){
        //     if(a[l].x >= p) break;
        //     else{
        //         if(rem)
        //         tot+=a[l].x*min(rem,a[l].y);
        //         rem-=a[l].y;
        //         l++;
        //         // cout << tot << ' ';
        //     }
        // }   
        f(i,0,n){
        int use = min(n - l, a[i].y);
        tot += a[i].first * use;
        l += use;
        // cout << l << ' ' << use ;
        // nl;
        }
        // if(l>r)rem=0;
        // if(rem>0)
        // tot += rem*p;
        cout << tot<< '\n';
        }
    return 0;
}