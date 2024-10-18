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

int num(int n,int r){
    string s = to_string(n);
    char t = s[r-1];
    return t-48;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    
        int mul=0, mn,mx;
        mn=1;
        mx=10;
        int i = 2;
        while(1){
            if(n >= mn && n < mx) {
                n-=(mul);
                int l = to_string(n).length()-1;
                int tmp = (n+l-1)/l;
                int rem = tmp%l;
                cout << mul  << ' ' << tmp << ' ' << num(tmp,rem);
                break;
            }else {
                mn = mx;
                mul += 9*mx*i;
                mx *=10;
                // n-=mul;
                i++;
            }
        }
        // cout << num(123446345,5);
        nl;
    }
    return 0;
}