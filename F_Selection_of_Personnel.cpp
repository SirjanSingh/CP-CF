#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define ll long long int

unsigned long long nCr(int n, int r)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    if (r > n / 2)
        r = n - r;

    unsigned long long result = 1;
    for (int i = 0; i < r; ++i)
    {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long int ans  = 0 ;
    if(n>=5) ans += nCr(n,5);
    if(n>=6) ans += nCr(n,6);
    if(n>=7) ans += nCr(n,7);
    
    cout<<ans;
    return 0;
}