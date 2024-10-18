#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(),vector.end()
#define x first
#define y second

bool customSort( const pair<int,int>& a,const pair<int,int>& b){
    int used1 = ((a.x*2 > a.y)? a.y: a.x);
    int used2 = ((b.x*2 > b.y)? b.y: b.x);
    return ( used1 > used2 );
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        int n,k;
        cin>>n >> k;
    
        vector<int>a(n),b(n);
        vector<pair<int, int>>v;
        f(i, 0, n)
        {
            cin >> a[i] >> b[i];
            if(a[i]!=0)
            v.push_back({a[i], b[i]});
        }
        int tot = 0;
        // sort(all(v),greater<pair<int,int>>());
        if(k!=0)
        sort(all(v), customSort);
        for(auto i: v){
            // cout << i.first << " " << i.second << "\n";
            if(k!=0){
                k--;
                tot += ((i.x*2 > i.y)? i.y: i.x);
            }else{
                tot += ((i.x > i.y)? i.y : i.x);
            }
        }
        cout << tot << "\n";

            
        // cout << '\n';


    
    return 0;
}