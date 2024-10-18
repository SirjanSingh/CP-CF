#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int cur = 0;
    vector<int>round;
    f(i,1,1000000){
        int temp = i;
        int nonzero = 0;
        while(temp > 0){
            int d = temp%10;
            if(d != 0) nonzero++;
            temp/=10;
        }
        if(nonzero==1)  cur++;
        round.push_back(cur);
        // cout << i << ' ' << cur << '\n';
    }

    while (t--)
    {
        int n;
        cin >> n;
        cout << round[n-1] << '\n';
    }
    return 0;
}