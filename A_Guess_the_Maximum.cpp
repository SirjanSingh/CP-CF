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

        f(i, 0, n)
        {
             cin >> a[i];
             int temp = a[i];
   
        }
        int curmx = INT_MAX;
        int ans = -1;
        f(i,0,n-1){
            if(a[i] <= a[i+1]){
                curmx =  min(curmx , a[i+1] - 1);
            }else{
                curmx = min(curmx,a[i] - 1);
            }
        }
        cout << curmx << '\n';
    }
    return 0;
}