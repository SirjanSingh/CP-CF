#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES"
#define no cout << "NO"

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a;
    // cout << "hello world ";
    int sum = 0;
    cout << "+ " << 1 << " " << 2 << endl;
    int temp;
    cin >> temp;
    sum += temp;

    cout << "+ " << 2 << " " << 3 << endl;
    int temp1;
    cin >> temp1;
    sum += temp1;

    cout << "+ " << 3 << " " << 1 << endl;
    int temp2;
    cin >> temp2;
    sum += temp2;

    sum = sum / 2;

    int a1 = sum - temp1;
    int b = sum - temp2;
    int c = sum - temp;

    a.push_back(a1);
    a.push_back(b);
    a.push_back(c);

    // cout << a1 << " "<< b << " " << c << endl;
    f(i, 4, n+1)
    {
        if(n==3) break;
        cout << "+ " << i << " " << 1 << endl;
        int temp;
        cin >> temp;
        // sum += temp;
        a.push_back(temp - a1);
        // int temp = a[i];
    }
    for (int i : a)
        cout << i << ' ';

    return 0;
}