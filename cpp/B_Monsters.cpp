#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define ll long long int

bool custom_sort(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first == b.first) {
        return a.second < b.second; 
    } else return a.first > b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin >> n >> k;
        vector<pair<int,int>>a(n);
        f(i,0,n){
            int temp;cin>>temp;
            a[i] = {((temp%k)?temp%k:k),i+1};
        }
        sort(a.begin(),a.end(),custom_sort);
        for(auto i :a)  cout<<i.second << " ";
        cout << '\n';
    }
    return 0;
}