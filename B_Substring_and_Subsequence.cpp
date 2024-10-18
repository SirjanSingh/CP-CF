#include <bits/stdc++.h>
using namespace std;
#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()
#define x first
#define y second
#define nl cout << '\n';
#define pb push_back
#define pob pop_back
#define mapii map<int, int>
#define mapci map<char, int>

//taken from gfgs
int lcs(string X, string Y, int m, int n)
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m - 1] == Y[n - 1])
        return 1 + lcs(X, Y, m - 1, n - 1);
    else
        return max(lcs(X, Y, m, n - 1),
                   lcs(X, Y, m - 1, n));
}
//taken from gfgs
int mss(string &X,string &Y,int n,int m)
{
    // Base Case
    if (n==0 || m==0) return 0;
     
    // Calls on smaller inputs
     
    // if the last char of both strings are equal
    if(X[n-1] == Y[m-1])
    {
        return  1 + mss(X,Y,n-1,m-1);
    }
     
    // if the last char of both strings are not equal
    else
    {
        return mss(X,Y,n-1,m);    
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        // int n;
        // cin>>n;
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.length();
        int m = s2.length();
        int cur = 0;
        int mx = 0;
        // f(i,0,m){
        //     f(j,0,m){
        //         string temp = s2.substr(i,j+1);
        //         if(s1.find(temp) != string::npos){
        //             cur = temp.length();
        //         }
        //         cout << temp << ' ' <<cur <<  '\n';
        //     }
        //     mx = max(mx,cur);
        //     cur = 0;
        // }
        int l = 0, r = 0;
        // while (l < n && r < m)
        // {
        //     cout << s1[l] << ' ' << s2[r];
        //     nl;
        //     if(s1[l] == s2[r] ) r++;
        //     l++;
        // }
        // cout << l << ' ' << r ;
        // nl;
        f(i,0,m+1){
            mx = max(mx,mss(s1,s2,n,i));
        }
        // int ans = mss(s1,s2,n,m);
        // cout << ans << ' ';
        // if(ans==m)    cout << n;
        // else cout << n+m-ans;
        // nl;
        // cout << s1 << ' ' << s2;
        // nl;
        // cout << n << ' ' << m << ' ' << mx << '\n';
        cout << n + m - mx << '\n';
    }
    return 0;
}