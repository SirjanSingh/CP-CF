#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(),vector.end()
#define maxn 1000000000
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    
        vector<int>a(n),b(n);

        int sum = 0;
        f(i, 0, n)
        {
             cin >> a[i];
             int t1 = a[i];
            b[i] = maxn/t1;
            sum+=b[i];
        }
        // cout << sum << '\n';
        bool flag = false;
        f(i,0,n){
            // cout << (a[i] * b[i] <=sum) << ' ' << a[i] << ' ' << b[i] << '\n';
            if(a[i]*b[i] <= sum){
                flag = true;
                break;
            }
        }
        // cout << '\n';
        if(!flag){
            for(auto i: b)  cout << i  << " ";
        }else cout << "-1\n";
    }
    return 0;
}