#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(),vector.end()

// int root(int a,int b,int c){
//     int gcd = __gcd(a,__gcd(b,abs(c)));
//     a = a/gcd;
//     b= b/gcd;
//     c/=gcd;
//     int d = b*b +4*a*(-c);
//     int x = (-b + sqrt(d))/2*a;
//     int y = (-b - sqrt(d))/2*a;
//     // cout << a << ' ' << b << ' ' <<  4*a*(-c) << '\n';
//     // cout << d << ' ' << x << ' ' << y << '\n';
//     return ((x>y)?x:y);
// }

bool fx(int n,vector<int>a,int c,int x){
    int ans = 0;
    int sum = 0;
    f(i,0,n){
        sum += ((a[i] + x )*(a[i] + x));
        if(sum >  c){
            break;
        }
    }
    return sum<=c;
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n >> c;
    
        vector<int>a(n);
        int sum = 0;
        int b = 0;
        f(i, 0, n)
        {
             cin >> a[i];
            //  int temp = a[i];
            //  sum += a[i]*a[i];
            //  b += a[i]*4;
            //  cout << sum << ' ' ;
        }
        int l=0;
        int r =1e10 ;
        while(l<r){
            int mid =(l+r)/2;
            if(fx(n,a,c,mid)){
                l=mid+1;
            }else{
                r = mid;
            }
        // cout << l << ' ' << mid << ' ' << r <<'\n';
        }
        cout <<r/2 << '\n';

        // cout << '\n';
        // cout << n *4<< ' ' << b << ' ' <<c - sum << '\n';
        // int ans = root(n * 4,b, sum - c);
        // cout << ans << '\n';


    }
    return 0;
}