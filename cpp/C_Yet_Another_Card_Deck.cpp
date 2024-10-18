#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(), vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int, int>
#define mapci map<char, int>

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int>  b;
        int temp;

    f(i, 0, n)
    {
        cin >> temp;
        b.push_back( temp);
    }
    f(i, 0, k)
    {
        cin >> temp;
        f(i, 0, n)
        {
            if (b[i] == temp)
            {
                cout << i + 1 << " ";
                rotate(b.begin(),b.begin()+i, b.begin()+i+1);
                break;
            }
        }
    }
    return 0;
}