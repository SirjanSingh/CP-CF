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
    
        vector<int>a(n),b(n);
        int s1 = 0,s2 =0,m1=INT_MAX,m2=INT_MAX;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];    
            s1+=temp;
            m1 = min(temp,m1);
        }   
        f(i, 0, n)
        {
            cin >> b[i];   
            int temp = b[i];
            s2 += temp;
            m2 = min(temp, m2);
        }
        cout << min(n*m1+s2,n*m2+s1); 
        nl;
    }
    return 0;
}