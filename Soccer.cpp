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
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1<y1){
            if(x2<y2)yes;
            else no;
        }else{
            if(y2<x2)yes;
            else no;
        }
    
    }
    return 0;
}