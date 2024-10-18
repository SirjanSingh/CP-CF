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
    
        int k = 1;
        f(i, 2, n+1)
        {   
            // cout << k << ' ';
            if(n%i!=0)  break;
            k++;
        }
        cout << k << '\n';
    }
    return 0;
}