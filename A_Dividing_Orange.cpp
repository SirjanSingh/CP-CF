#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    vector<int>u(n*k);
    for (int i = 0; i < n*k; i++)   u[i] = i+1;
    vector<int>a(k);
    for (int i = 0; i < k; i++){
        cin>>a[i];
        u.erase(remove(u.begin(), u.end(), a[i]), u.end());
    }
    for(int i = 0; i < k;i++){
        for (int j = 0; j < n-1; j++)   cout<<u[j+i*(n-1)]<<" ";
        cout<<a[i]<<'\n';
    }
    return 0;
}