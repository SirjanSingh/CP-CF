#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(),vector.end()

int xr(int n) {
  if (n%4==0) return n; 
  if (n%4==1) return 1; 
  if (n%4==2) return n+1;
  return 0; 
} 

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    // vector<int>xr;
    // int curxr = 1;
    // f(i,2,300010){
    //     curxr = curxr ^ i;
    //     xr.push_back(curxr);
    //     // cout <<  curxr
    // }
    while(t--){
        int a,b;
        cin>>a >> b;
        int req = a;
        
        if((xr(a-1) ^ b) == 0 )  cout << req << '\n';
        else if((xr(a-1) ^ b) == a) cout << req + 2 << '\n';
        else    cout << req + 1 << '\n';
    }
    return 0;
}