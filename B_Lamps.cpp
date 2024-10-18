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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    
        vector<pair<int,int>>a(n);
         auto comparator = [](const std::pair<int, int> &a, const std::pair<int, int> &b) {
        if (a.first == b.first) {
            return a.second > b.second;
        }
        return a.first < b.first;
    };
    set<int>st;
        f(i, 0, n)
        {
            cin >> a[i].x>>a[i].y;   
            st.insert(a[i].x);
        }
        sort(all(a),comparator);
        // f(i,0,n) cout << a[i].x << ' ' << a[i].y << '\n';
        int ans = 0;
        int l = 0,r = n-1;
        auto it = st.begin();
        int target = *it,tc = 0;
        // cout << "--------\n";
        f(i,0,n){
            // cout << target << ' ' << tc << '\n';
            if(a[i].x < target) continue;
            if(a[i].x != target || tc == target) target = *((it == st.end())?it:++it),tc = 0;

            if(a[i].x == target && tc < target){
                tc++;
                ans+=a[i].y;
            }
            // if() target = *(++it),tc = 0;
        }
        cout << ans << '\n';
        // nl;
    }
    return 0;
}