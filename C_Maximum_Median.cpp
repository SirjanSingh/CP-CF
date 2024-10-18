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
#define pii pair<int,int>
typedef unsigned long long ull ;
void _print(int t) {cout << t;}void _print(string t) {cout << t;}void _print(char t) {cout << t;} void _print( long  double t) {cout << t;}void _print(double t) {cout << t;}void _print(ull t) {cout << t;}template <class T, class V> void _print(pair <T, V> p);template <class T> void _print(vector <T> v);template <class T> void _print(set <T> v);template <class T, class V> void _print(map <T, V> v);template <class T> void _print(multiset <T> v);template <class T, class V> void _print(pair <T, V> p) {cout << '{'; _print(p.ff); cout << ','; _print(p.ss); cout << '}';}template <class T> void _print(vector <T> v) {cout << '['; for (T i : v) {_print(i); cout << ' ';} cout << ']';}template <class T> void _print(set <T> v) {cout <<'['; for (T i : v) {_print(i); cout << ' ';} cout << ']';}template <class T> void _print(multiset <T> v) {cout << ']'; for (T i : v) {_print(i); cout << ' ';} cout << ']';}template <class T, class V> void _print(map <T, V> v) {cout << '['; for (auto i : v) {_print(i); cout << ' ' ;} cout << ']';} void _print(auto x) { cout << x ;}


bool fx(vector<int>a,int n,int k,int x){
    int m  = 0;
    f(i,(n)/2,n){
        m+=x-a[i];
        if(m>k) return false;
    }
    // cout << m << '\t' ;
    return m<=k;
}
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
        int l = 0 ;
        int r = 2e9;
        while(l<r){
            int mid = (l+r+1)/2;
            if(fx(a,n,k,mid)){
                l=mid;
            }else{
                r = mid - 1;
            }
            // cout << l << ' '  << mid << ' ' << r << '\n';
        }
        // f(i,1,n*n){
        //     cout << fx(a,n,k,i) << ' ' ;
        // }
        cout << l << '\n';
    
    return 0;
}