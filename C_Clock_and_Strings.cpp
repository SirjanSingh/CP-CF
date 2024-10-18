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
        int n = 4;
        // cin>>n;
    
        vector<int>a(n);

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
        }
        int ans = 0;
        f(i,1,13){
            if(a[0] == i || a[1] == i){
                ans++;
            }
            if(ans != 2&& ans !=0 && (a[2] == i || a[3] == i)){
                ans = -1;
                break;
            }
            if(ans == 2) break;
        }
        int a2 = ans;
        // cout << ans << ' ';
        ans = 0;
         f(i,1,13){
            if(a[2] == i || a[3] == i){
                ans++;
            }
            if(ans != 2&& ans !=0 && (a[0] == i || a[1] == i)){
                ans = -1;
                break;
            }
            if(ans == 2) break;
        }
        // cout <<a2 << ' ';
        if(ans == 2 || a2 == 2)   no;
        else yes;
    }
    return 0;
}