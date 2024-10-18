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
        int n;
        cin >> n;

        vector<int> a(n);
        map<int,int> b;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            b[temp]++;
        }
        bool shuffle = false;
        for(auto i : b){
            if(i.second <2){shuffle = true; break;}
        }
        if(!shuffle){
            int cur = 0;
            for(auto i : b){
                f(a,1,i.second){
                    cout << a+1 + cur << ' ' ;
                }
                cout << 1 + cur<< ' ';
                cur  += i.second;
            }

        }else cout << "-1";
        cout << '\n';
    }
    return 0;
}