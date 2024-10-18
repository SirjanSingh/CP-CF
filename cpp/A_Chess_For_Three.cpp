#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        vector<int> mp;
        if(p1>0) mp.push_back(p1);        
        if(p2>0) mp.push_back(p2);        
        if(p3>0) mp.push_back(p3);
        int res = 0;
        //auto it = mp.begin();
        // for(auto it : mp){
        //     cout << it << ' ';
        // }cout << '\n';
        sort(all(mp));
        while(mp.size() > 1){
            int a = mp[mp.size()-1]; mp.pop_back();
            int b = mp[mp.size()-1]; mp.pop_back();
            a--;
            b--;
            if(a>0) mp.push_back(a);
            if(b>0) mp.push_back(b);
            sort(all(mp));
            res++;
        }
        // if (p1 == 0 && p2 == 0 && p3 == 0)
        //     cout << "0";
        if(mp.size() != 0 && mp[0]%2){
            cout << "-1";
        }else {
            cout << res;
        }
        cout << '\n';
        // else if(p1+p2+p3 %2 != 0)
        //     cout << "-1";
        // else
        // {
        //     int ans = ((p1 + p2 + p3)/2) -min(p2,p3); 
        // }

        // if((p1+p2+p3)%2==0)
        // {
        //     if(p1+p2>=p3)
        //     {
        //         int x = (p1+p2+p3)/2;
        //         cout<<x<<endl;
        //     }
        //     else
        //     {
        //         cout<<p1+p2<<endl;
        //     }
        // }
        // else
        // {
        //     cout<<-1<<endl;
        // }
    }

    return 0;
}