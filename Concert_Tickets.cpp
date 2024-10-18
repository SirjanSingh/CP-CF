#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(),vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int,int>
#define mapci map<char,int>

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n,m;
    cin >> n >> m;

    multiset<int> a;

    f(i, 0, n)
    {
        int x ;
        cin >> x;
        a.insert(x);
    }
    vector<int>b(m);
    int rem = 0;
    f(i, 0, m)
    {
        if(rem < n){
        cin >> b[i];
        auto it = a.upper_bound(b[i]);
        it--;
        if(it != a.end() && *it <= b[i]){
            // if(b[i] != 3)it--;
            cout << *(it);
            a.erase(it);
            rem++;
        }
        else cout << "-1";
        }
        else cout << "-1";
        nl;
    }
    // sort(all(a));
    // sort(all(b));

    // int j=0;
    // f(i,0,m){
    //     // cout << j << ' ';
    //     // if(a[j] <= b[i] )   cout << a[j++] << '\n';
    //     // else cout << "-1\n";
    //     // for(auto i : a) cout << i << ' ' ;
    //     // nl;
    // }
    return 0;
}