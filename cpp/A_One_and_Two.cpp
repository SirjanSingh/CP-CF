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
        int two = 0;
        f(i, 0, n)
        {
             cin >> a[i];
             int temp = a[i];
             if(a[i] == 2) two++;
        }
        if(two %2 == 1) cout << "-1\n";
        else{
            if(two == 0)    cout << 1 << '\n';
            else{
                int half = two/2;
                int ans = 0;
                f(i,0,n){
                    if(a[i] == 2) two--;
                    if(two == half){
                        ans = i;
                        break;
                    }
                }
                cout << ans +1<< '\n';
            }
        }
    }
    return 0;
}