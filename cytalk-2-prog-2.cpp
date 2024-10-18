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
    int t;
    cin >> t;
    // given n block , how many max  increasing stairs you can make form it

    vector<int> a;
    // a[0] = 1;
    a.push_back(0);
    int i = 1;
    while (1)
    {
        a.push_back(i * (i + 1) / 2);
        i++;
        if (a.back() > t)
            break;
        // t -= a.back();
        cout << "t = " << t << ", a[i] =" << a.back() << '\n';
    }

    for (int i : a)
        cout << i << " ";
    cout << "\nnumber of stiars is " << a.size() - 1;
    return 0;
}