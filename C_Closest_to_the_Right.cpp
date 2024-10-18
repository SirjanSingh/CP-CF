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
    
        int n,k;
        cin>>n>>k;
    
        vector<int>a(n);

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
        }
        sort(all(a));
        f(i,0,k){
            int temp;
            cin >> temp;
            int l=-1,r=n,mid;
            while(r>l+1){
                mid = (r+l)/2;
                if(a[mid] >= temp) r=mid;
                else l=mid;
                // cout << l << ' ' << r << '\n';
            }
            cout << r + 1 << '\n';
        }
    
    return 0;
}