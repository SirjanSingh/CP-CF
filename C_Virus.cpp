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
        int n,k;
        cin>>n>>k;
    
        vector<int>a(k);

        f(i, 0, k)
        {
            cin >> a[i];
            int temp = a[i];
   
        }
        int gap = 0;
        sort(all(a));
        vector<int>gp;
        gp.push_back(n-a.back()+a[0]-1);
        f(i,0,k-1){ gp.push_back(a[i+1] - a[i]-1);gap=a[i];}
        sort(all(gp),greater<int>());
        // for(auto i : gp) cout << i << ' ' ;
        int ans = 0;
        int ti  = 0;
        f(i,0,k){
            ti = i*4+1;
            if(gp[i] > ti){
                ans += gp[i]-ti;
            }else if( gp[i] == ti){
                ans++;
                break;
            }
        }
        cout << n-ans;
        nl;
    }
    return 0;
}