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
        int n;
        cin>>n;
    
        vector<int>a(n);
        int ev = 0;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            if(a[i]%2 == 0) ev++;
        }
        if(ev < n && ev > 0) cout << 2 ;
        else {
            //now to the needy broski
            // int temp = 1;

            f(i,1,57){
                int temp = (1LL<<i);
                // int div = 0;
                set<int>st;
                f(j,0,n){
                    // if(a[i] % temp == 0) div++;
                    // mp[a[i]%temp]++;
                    st.insert(a[j]%temp);
                }
                if(st.size() == 2){
                    cout << temp;
                    break;
                }
            }
        }
        nl;

    }
    return 0;
}