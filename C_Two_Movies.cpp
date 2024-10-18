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

        vector<int> a(n), b(n);

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
        }
        f(i, 0, n)
        {
            cin >> b[i];
        }

        int x = 0, y = 0;
        int ans = 0;
        f(i, 0, n)
        {
            int req = max(a[i], b[i]);
            if(a[i] == 1 && b[i] == 1){ ans ++; continue;}
            if(a[i] == -1 && b[i] == -1){ ans ++; continue;}
            // if(req== -1 ||req==1) ans+=req;
            if(req == 0) continue;
            if(a[i] <= 0 && b[i] == 1){ y ++; continue;}
            if(a[i] <= 0 && b[i] == -1){ y--; continue;}
            if(a[i] == 1 && b[i] <= 0){ x ++; continue;}
            if(a[i] == -1 && b[i] <= 0){ x --; continue;}

            
            // if(a[i] == b[i]){
            //     if(x<y){
            //         if(a[i]==-1){
            //             y+=a[i];
            //         }else x+=a[i];
            //     }
            //     else{
            //         if(a[i]==-1){
            //             x-=a[i];
            //         }else y+=a[i];
            //     }
            // }
            // else{
            //     if(x<y){
            //         x+=max(a[i],b[i]);
            //     }else{
            //         y+=max(a[i],b[i]);
            //     }
            // }

            // cout << x << ' ' << y << '\n';
        }
        f(i,0,n)
            if(a[i] == 1 && b[i] == 1){
                if(x<y)x++;
                else y++;
            }
        
        f(i,0,n)
        
            if(a[i] == -1 && b[i] == -1){
                if(x<y)y--;
                else x--;
            }
        
        cout << min(x,y) << '\n';
    }
    return 0;
}