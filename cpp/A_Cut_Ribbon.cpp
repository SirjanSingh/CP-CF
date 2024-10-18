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
    int n;
    vector<int>a(3);
    cin >> n >> a[0] >> a[1] >> a[2];
    sort(all(a));
    if(n % a[0] == 0){
        cout << n / a[0] ;
    }else{
        int mx = -1;
        int k = 0;
        f(i,0,n+1){
            f(j,0,n+1){
                k = 0;
                int temp  = n-i*a[0]-j*a[1];
                if(temp >=0) k = (temp)/a[2];
                if(i*a[0] + j * a[1] + k*a[2] == n)  mx = max(i+j+k, mx);
            }
        }
        cout << mx;
    }
    return 0;
}