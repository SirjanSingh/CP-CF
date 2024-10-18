#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(),vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n >> k;
        string s;
        cin >> s;
        map<char,int>mp;
        for(auto ch : s) mp[ch]++;
        int count = 0;
        for(auto i : mp){
            count += i.second % 2;
        }
        // count-=1;cout << count << ' ';
        if((count - k  == 1 && count > k) || count <= k) yes;
        else no;
    }
    return 0;
}