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

int req (int c1,int c0){
    return (pow(2,c1)+pow(2,c0) - 2);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        int n,m;
        cin>>n>>m;
    
        int ans = 0;
        int temp = 0,c1=0,c0=0;
        int a[n][m];
        f(i,0,n){f(j, 0, m)
        {
            cin >> temp;
            a[i][j] = temp;
            if(temp == 1) c1++;
            else c0++;
        }
        ans+= req (c1,c0);
        c1=0,c0=0;
        }
        f(i,0,m){f(j, 0, n)
        {
            if(a[j][i] == 1) c1++;
            else c0++;
        }
        ans+= req (c1,c0);
        c1=0,c0=0;
        }
    
    std::cout << ans - n*m<< "\n";
    return 0;
}