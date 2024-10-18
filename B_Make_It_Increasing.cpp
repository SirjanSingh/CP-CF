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
        map<int,int>mp;
        f(i, 0, n)
        {
             cin >> a[i];
             int temp = a[i];
             mp[temp]++;
        }
        int cont = 0;
        // for(auto i : mp){
        //     if(i.second > 1){
        //         cont = 1;
        //         break;
        //     }
        // }
        // if(cont)
        // {
        //     cout << "-1\n";
        // }else
        // {

            int ans = 0;
            for(int i = n-1; i > 0; i--){
                if(a[i-1] >= a[i]){
                    while(a[i-1]>0){
                        a[i-1]/=2;
                        ans++;
                        if(a[i-1] < a[i])   break;
                    }
                    if(a[i-1] == a[i]){
                        cout << "-1\n";
                        cont = 1;
                        break;
                    }
                }

            }
            if(!cont)
                cout << ans  << '\n';
        // }
    }
    return 0;
}