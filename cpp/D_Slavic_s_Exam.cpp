#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define fr(i, x, y) for (int i = x; i > y; i--)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(),vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int,int>
#define mapci map<char,int>


//taken from gfgs
bool issubsequence(string& s1, string& s2)
{
    int n = s1.length(), m = s2.length();
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    /*If i reaches end of s1,that mean we found all
    characters of s1 in s2,
    so s1 is subsequence of s2, else not*/
    return i == n;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin >> a>>b;
        int n = a.length();
        int m = b.length();
        if(n < m){
            no;
        }
        else{
            int l = 0;
            int r = 0;
            while(r < m && l < n){
                if(a[l] == b[r]){
                    l++;
                    r++;
                    continue;
                }else if( a[l] == '?' ){
                    a[l] = b[r];
                    l++;
                    r++;
                    continue;
                }else if( a[l] != b[r]){
                    l++;
                    continue;
                }
                if(r == m) break;
            }
            // cout << a << ' ' << b << ' ' << n << ' ' << m << '\n';
            if(issubsequence(b,a)){
                yes;
                f(i,0,n)if(a[i] == '?') a[i] = 'a';
                cout << a;
                nl;
            }
            else no;

        }
    }
    return 0;
}