#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

int cd(double x){
    return (x-(int)x == 0);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (b - a == c - b)
        {
            yes;
        }
        else
        {
            int tempa =  b-(c-b);
            int tempb = ( a + (c-a)/2);
            int tempc = ( a + 2*(b-a));
            int a1 = (tempa % a == 0 && tempa >= a && tempa != 0)? 1:0;
            int b1 = (tempb % b == 0 && tempb >= b && tempb != 0 && (c-a)%2==0)? 1:0;
            int c1 = (tempc % c == 0 && tempc >= c && tempc != 0)? 1:0;
            if(c1)  yes;
            else if(b1) yes;
            else if(a1) yes;
            else no;
        }
    }
    return 0;
}