#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    multiset<int> lb, rb;

    while (t--)
    {
        char c;
        int a, b;
        cin >> c >> a >> b;

        if (c == '+')
        {
            lb.insert(a);
            rb.insert(b);
        }
        else
        {
            lb.erase(lb.lower_bound(a));
            rb.erase(rb.lower_bound(b));
        }

        if (!rb.empty() && !lb.empty() && *rb.begin() < *lb.rbegin())
        {
            yes;
        }
        else
        {
            no;
        }
    }

    return 0;
}
