#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()
typedef struct mini
{
    int x;
    int y;
} mini;
bool customSort(const mini &a, const mini &b)
{
    if (a.x != b.x)
        return a.x < b.x;
    return a.y < b.y;
}
bool customsort2(const mini &a, const mini &b)
{
    if (a.y != b.y)
        return a.y < b.y;
    return a.x < b.x;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int p;
        cin >> p;
        vector<mini> b;
        vector<int> yay;
        f(i, 0, p)
        {
            int n;
            cin >> n;

            vector<int> a(n);

            int first_min = LLONG_MAX, second_min = LLONG_MAX;

            f(i, 0, n)
            {
                cin >> a[i];
                if (a[i] < first_min)
                {
                    second_min = first_min;
                    first_min = a[i];
                }
                else if (a[i] < second_min)
                {
                    second_min = a[i];
                }
            }

            // cout << first_min << " " << second_min << '\n';
            mini temp;
            yay.push_back(first_min);
            yay.push_back(second_min);
            temp.x = first_min;
            temp.y = second_min;
            b.push_back(temp);
        }

        sort(all(yay));
        sort(all(b), customSort);
        int ans = b[0].x;
        if (p > 1)
        {
            f(i, 0, p)
            {
                ans += b[i].y;
            }
            sort(all(b), customsort2);
            ans -= b[0].y;
        }
        // cout << yay[0] + yay[2*p-1] + yay[2*p-2] << '\n';
        cout << ans << '\n';
        // cout << '\n';
    }
    return 0;
}