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
        int n;
        cin >> n;
        if (n %2!= 0)
            cout << "NO\n";
        else
        {
            int c = 0;
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                if(i%2==0&&i!=0)  c++;
                cout<<(char)(65+c);//<<(char)(65+c);
            }
            cout<<'\n';
        }
    }
    return 0;
}