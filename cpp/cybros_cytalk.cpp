#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES"
#define no cout << "NO"
#define all(vector) vector.begin(),vector.end()
int lowerBound(vector<int> a, int n, int x)
{
    int l = 0, r = n - 1, m, ans = n;
    while (l <= r)
    {
        m = ( l + r) /2;
        if(a[m] >= x){
            ans = m;
            r = m -1;
        }else {
            l = m + 1;
        }
    }
    return ans;
}
//best answer at each step pf the iteration is the first element
// in the third category ie >= one , a[r] thus 

// samllest index having balue >= x l
     // LARGERST UINDEX HAVING CALUE  < X   l-1
     //largest index having value <=x u-1
     //smllest index having value > x u
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << *(upper_bound(all(a), 50)) << '\n';

    return 0;
}