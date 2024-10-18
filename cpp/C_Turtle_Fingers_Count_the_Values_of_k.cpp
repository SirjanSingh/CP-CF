#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, l;
        cin >> a >> b >> l;
        // as the max l can be near 2^20 which will be inside the limit of the loop  so we cant just itereate thoruhg the loop for 25 times to be safe

        set <long long int> s;
        long long ax = a;
        long long by = b;
        long long x=1,y=1;
        while (l > a && l % a == 0)
        {
            a = a * ax;
            x++;
        }
        while (l > b && l % b == 0)
        {
            b =  b * by;
            y++;
        }
        a = ax;
        b = by;
        //int c = 0;
        for (int i = 0; i <= x; i++)
        {
            ax = pow(a, i) + 0.5;
            for (int j = 0; j <= y; j++)
            {
                by = pow(b, j) + 0.5;
                long long int ans = ax * by;
                if (l >= ans && l % ans == 0){
                    s.insert(ans);
                    //cout<<l/ans<<' ';
                }
                
                    //c++;
                   //counter doesnt work as we need unique element so we use set;
            }
        }
        //cout<< ", size= "<<s.size()<<'\n';
        cout<<s.size()<<'\n';
    }
    return 0;
}