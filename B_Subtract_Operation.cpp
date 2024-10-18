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
        int n ,k ;
        cin>>n >> k;
    
        vector<int>a;
        mapii mp;
        f(i, 0, n)
        {
            int temp; cin >> temp;
            if(mp[temp] == 0)
                a.push_back(temp);
            mp[temp]++;
        }

        int pres = 0;
        for(auto i : a){
            if(mp[k + i] > 0){
                pres = 1;
                break;
            }
            // cout << mp[k+i] << ' ' ;
        }
        if(pres == 1)   yes;
        else no;
    }
    return 0;
}