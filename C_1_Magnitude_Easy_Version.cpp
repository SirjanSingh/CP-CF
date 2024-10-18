#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(), vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int, int>
#define mapci map<char, int>

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n),negi,posi;
        int sum = 0;
        int neg = 0;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            if (temp < 0){
                neg++;
                negi.push_back(a[i]);
                if(neg != 1)
                posi.push_back(sum);
                sum = 0;
            }else{
                if(neg > 0)
                sum+=temp;
            }
            // sum = abs(sum + temp);
        }
        // for( int i : posi)  cout << i << ' ';
        // nl;
        int cursum = 0;
        int crsm = 0;
        int tp = neg ;
        int in = 0;
        f(i, 0, n)
        {
           crsm += a[i];
           cursum = max(cursum + a[i], abs(crsm));
        }

        cout << cursum << '\n';
       
    }
    return 0;
}