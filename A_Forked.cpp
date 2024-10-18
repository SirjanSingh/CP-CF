#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(),vector.end()
#define x first
#define y second

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,xk,yk,xq,yq;
        cin >> a >> b ;
        cin >> xk >> yk ;
        cin >> xq >> yq;

        set<pair<int,int>>k;
        set<pair<int,int>>q;

        k.insert({xk+a,yk+b});
        k.insert({xk+a,yk-b});
        k.insert({xk-a,yk+b});
        k.insert({xk-a,yk-b});
        k.insert({xk+b,yk+a});
        k.insert({xk+b,yk-a});
        k.insert({xk-b,yk+a});
        k.insert({xk-b,yk-a});

        q.insert({xq+a,yq+b});
        q.insert({xq+a,yq-b});
        q.insert({xq-a,yq+b});
        q.insert({xq-a,yq-b});
        q.insert({xq+b,yq+a});
        q.insert({xq+b,yq-a});
        q.insert({xq-b,yq+a});
        q.insert({xq-b,yq-a});

        // for(auto i : k) cout << i.x << " " << i.y << "\n";
        // cout << '\n';
        // for(auto i : q) cout << i.x << " " << i.y << "\n";
        // cout << '\n';

        int ans = 0;
        for(auto i : k){
            for(auto j: q){
                if(i.x == j.x && i.y == j.y)    ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}