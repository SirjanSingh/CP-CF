#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(),vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    
        vector<int>a(n);
        vector<int>b(n+1);


        f(i, 0, n)
        {
             cin >> a[i];   
        }
        int ans = 0;
        f(i, 0, n+1)
        {
             cin >> b[i];  
             if(i != n)   ans += (abs(b[i] - a[i])); 
        }
        int index = 0;
        int least = INT_MAX;
        // for(auto i : a) cout << i << ' ';
        // cout << '\n';
        // for(auto i : b) cout << i << ' ';
        // cout << '\n';
        // cout << b[n] << '\n';
        // cout << ans << '\n';
        int diff = 0;
        int extra = 1;//for cloning
        f(i,0,n){
            if(b[n] >= a[i] && b[n] <= b[i]){ index = 1; break;}
            else if(b[n] <= a[i] && b[n] >= b[i]){ index = 1; break;}
            if(b[n] == a[i] || b[n] == b[i]){index = 1;  break;}
            diff = abs(b[n] - a[i]);
            least = min(least , diff);
            least = min(least, abs(b[n]-b[i]));
            // cout << diff << ' ';
        }
            least = min(least , diff);
            // cout << diff << ' ' << least << '\n';
        // if(least == 0) least++;
        if(index){ least = 0;}
        // cout << least << '\n';
        cout << least + ans + extra<< '\n';
    }
    return 0;
}