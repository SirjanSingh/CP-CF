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
    
        int n,k;
        cin>>n>>k;
    
        vector<int>a(n);

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
        }
        sort(all(a));
        f(i,0,k){
            int temp;
            cin >> temp;
            int l=0,r=n-1,mid;
            bool flag = false;
            while(l<=r){
                 mid = l + (r - l) / 2;
                if(temp == a[mid]){
                    flag = true;
                    break;
                }
                else if(temp < a[mid])
                    r = mid - 1;
                else 
                    l = mid + 1;
            }
            if(flag) yes;
            else no;
        }
    
    return 0;
}