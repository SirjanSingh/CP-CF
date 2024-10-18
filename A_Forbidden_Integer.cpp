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
        int n, k, x;
        cin >> n >> k >> x;
        if (x == 1)
        {

            if ((n % 2 == 1 && k == 2) || k == 1)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n"
                     << n / 2 << '\n';
                while (n > 1)
                {
                    if(n != 3)
                    cout << "2 ";
                    else
                        cout << "3 ";
                    n = n - 2;
                }
                cout << '\n';
            }
            // int n3 = n % 2;
            // int n2 = (n3) ? n / 2 - 1 : n / 2;
            // cout << n2 + n3 << '\n';
            // while (n2--)
            //     cout << "2 ";
            // if (n3 != 0)
            //     cout << "3\n";
        }
        // else if(x== 2){
        //     cout<<n<<'\n';
        //     while(n--) cout<<"1 ";
        // }
        else
        {
            cout << "YES\n";
            cout << n << '\n';
            while (n--)
                cout << "1 ";
            cout << '\n';
        }
    }
    return 0;
}