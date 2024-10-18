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
   
        int n,m,k;
        cin>>n>>m>>k;
        // k++;
        if(k<=n) cout << k +1<< ' ' << 1;
        else{

            k-=n-1;
            if(k%4==0) cout <<n - (k/2) +1<< ' ' << 2;
            else if(k%4==1) cout << n-k/2 +2 << ' ' << 2;
            else if(k%4==2) cout << n-k/2+2<< ' ' << 3;
            else if(k%4==3) cout << n-k/2 +1<< ' ' << 3;
        }
    
    return 0;
}