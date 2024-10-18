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
        int n;
        cin>>n;
    
        vector<int>a(n);
        f(i,0,n)    a[i] = i;
        int mx = 0;
        int pw = log2(n-1);
        int req = 1 << pw;
        // cout << req << '\n';
        for(int i = req - 1 ; i >= 0; i--)  cout << a[i] << ' '; 
        f(i, req, n)    cout << a[i] << ' ';
            // mx = max((a[i] ^ a[i+1]), mx);
        // cout << a[n-1];//<< ' ' << mx << '\n';
    //     int c = 0;
    // please dp not go below the complexity of the code below is O(n!*n) 
    //      int globalMaxXOR = INT_MAX;

    // do {
    //     int currentMaxXOR = 0;
        
    //     f(i, 0, n - 1) {
    //         // cout << a[i];
    //         currentMaxXOR = std::max(currentMaxXOR, a[i] ^ a[i + 1]);
    //     }
        
    //     globalMaxXOR = std::min(globalMaxXOR, currentMaxXOR);
    //     // cout <<  a[n-1] <<' ' <<currentMaxXOR << ' ';
    // // cout  << globalMaxXOR << '\n';
    //     if((currentMaxXOR & (currentMaxXOR - 1) )== 0)c++;
    // } while (std::next_permutation(a.begin(), a.end()));
    nl;
    // cout << ' ' << c << '\n';
    }
    return 0;
}