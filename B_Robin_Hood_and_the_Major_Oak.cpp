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

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int req = n-k+1;
        int ans = (n+1)/2  - req/2;
        // if(req == 0){
        //     if(n%4==0 || n%4==3 && n!= 1)yes;
        //     else no;
        // }else{
        //     int newstart = req;
        //     if(k % 4 == 0 || k % 4  == 3){
        //         if(n%4==3||n%4==0)yes;
        //         else no;
        //     }else{
        //         if(n%4==1||n%4==2)yes;
        //         else no;
        //     }
        //     // nl;
        // }
        if(ans%2==0)yes;
        else no;
    }
    return 0;
}