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
        string s;
        cin >> s;
        int zero = count(s.begin(), s.end(), '0');
        int one = count(s.begin(), s.end(), '1');
        int presence = s.find("11");
        if(one % 2 != 0 || one == 2  &&  presence != -1){
            cout<<"NO\n";
            // continue;
        }else {
            cout << "YES\n";
        }
    }
    return 0;
}