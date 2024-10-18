#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(),vector.end()
#define x first
#define y second
#define nl cout << '\n';
#define pb push_back
#define pob pop_back
#define fn(i,x,z,y) for(int i = x;i > z, i-=y)

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //string s; cin >>s;
        vector<int>a(n);

        f(i, 0, n)
        {
            int temp;
            cin>>temp;
            a[i] = temp;
        }
    }
    return 0;
}