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
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        bool flag = false;
        for (int i = 1; i < n - 1; i++)
        {
            if(a[i] >= a[i-1]*2 && a[i+1] >=a[i-1]){
                a[i] = a[i] - 2*a[i-1];
                a[i+1] -= a[i-1];
                a[i-1]=0;
            }
            // while (a[i - 1] != 0)
            // {
            //     a[i - 1] -= 1;
            //     a[i] -= 2;
            //     a[i + 1] -= 1;
            //     // for(int i:a)    cout<<i<<" ";
            //     // cout<<'\n';
            // }
            if (a[i] < 0 || a[i - 1] < 0 || a[i + 1] < 0)
            {
                cout << "NO\n";
                flag = true;
                break;
            }
        }
        int c = 0;
        for(int i : a){
            if(i!=0) c++;
        }
        if(!flag && c== 0)   cout<<"YES\n";
        // else     cout<<"NO\n";
        if(c!=0 && !flag)    cout<<"NO\n";
    }
    return 0;
}