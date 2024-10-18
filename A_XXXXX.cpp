#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n >> x;

        vector<int> a(n);
        int sum  = 0;
        int count= 0;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            sum+=temp;
            if(temp%x==0) count++;
        }
        if(sum%x!=0)    cout << n  << " \n";
        else if(count == n) cout << "-1\n";
        else{
            int l=0,r=n-1;
            // while(l<r) {
            //     cout << l << ' ' << r << ' ' << '\n';
            //     if((sum-a[l])%x == 0 ){
            //         l++;
            //         sum-=a[l];
            //         // continue;
            //     }
            //     else if(((sum-a[r])%x == 0 )){
            //         r--;
            //         sum-=a[r];
            //         // continue;
            //     }


            // }
            int temp = sum;
            while (l < r ) {
                if((sum - a[l]) % x != 0 )   break;
                sum-=a[l];
                l++;
            }

            while (r > l) {
                if((temp -  a[r]) % x != 0 )   break;
                r--;
            }
            // cout << l << ' ' << r << ' ' << '\n';
            // if(l>r){ cout << "-1\n";   continue;}
            cout << max(n-l-1,r) << '\n';//
            // cout << n-l-1 <<' ' << l <<  ' ' << r << " \n";
        }
            // cout << '\n';
    }
    return 0;
}