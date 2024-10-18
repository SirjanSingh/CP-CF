#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        long long int n, m, k;
        cin >> n >> m >> k;
        cout << ((k / m )+ (k / n) + 2) << '\n';
    }
    return 0;
}