#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES" 
#define no cout << "NO"

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        int n,k;
        cin>>n >> k;
    
        vector<int>a(n);

        f(i, 0, n)   cin >> a[i];
        
        int sum = 0,mnsum = INT_MAX;
        f(i,0,n-k){
            f(j,i,k){
                sum +=a[j];
            }
        mnsum = min(sum,mnsum);
        cout << mnsum << ' ';
        }

        cout << '\n' <<  mnsum;

    
    return 0;
}