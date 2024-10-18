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
    
        int n,d;
        cin>>n >> d;
    
        vector<int>a(n);

        f(i, 0, n){
             cin >> a[i];
             int temp = a[i];
        }
        sort(all(a),greater<int>());

        int l = 0,r = n-1;
        int won = 0;
        while(l<=r){
            int req = (d+a[l])/a[l] ;
            int presentasla = (r-l+1) * a[l] ;
            if(presentasla <= d) break;
            if(a[l] > d){
                l++;
                won++;
            }else if(a[l] == d){
                l++;r--;won++;
            }else if(presentasla > d){
                // int req = (d+a[l]-1)/a[l] ; 
                l++; r-= (req - 1); won++;
            }
            // cout << l  << ' ' << r << ' ' << won  << ' ' << req << ' ' << presentasla << '\n'; 
        }
        cout << won ;
    
    return 0;
}