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
    
        vector<int>a(31,0);

        f(i, 0, n)
        {
            int temp;
            cin >> temp;
            int j =0;
            while(temp>0){
                a[j]+=temp%2;
                j++;
                temp/=2;
            }
        }
        int ans = 0;
        for(int i = 30;i>=0;i--){
            if(k>=(n-a[i])){
                ans+=(1<<i);
                k-=(n-a[i]);
            }
        }   
        cout << ans;
        nl;

    }
    return 0;
}