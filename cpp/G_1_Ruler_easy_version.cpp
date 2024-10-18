#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define fr(i, x, y) for (int i = x; i > y; i--)
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
        int l = 2;
        int r = 1000;
        while(l<r){
            int md = (l+r)/2;
            cout << "? 1 " << md<< endl;
            int tmp;
            cin>>tmp;
            if(tmp == md){
                l = md + 1;
            }else{
                r = md ;
            }
        }
        cout << "! " << l<< endl;
    }
    return 0;
}