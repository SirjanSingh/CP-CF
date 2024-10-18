#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()
#define x first
#define y second
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> a;
    vector<int> x(100010, 0);
    vector<int> y(100010, 0);
    vector<int> yd(100010, 0);
    map<pair<int, int>, int> cap;
    for (int i = 0; i < n; i++){
        int t1, t2;
        cin >> t1 >> t2;
        int temp = t1 * 10000 + t2;
        x[t1]++;
        y[t2]++;
        a.push_back(make_pair(t1, t2));
    }
    for (int i = 0; i < m; i++){
        int t1, t2;
        cin >> t1 >> t2;
        yd[t2]++;
        cap[{t1, t2}]++;
    }
    vector<int> fin = yd;
    int match = 0;
    int perfectMatch = 0;
    f(i, 0, n)
        if (yd[a[i].y] > 0){
            match++;
            yd[a[i].y]--;
        }
    f(i, 0, n){
        if (fin[a[i].y] > 0 && cap[{a[i].x, a[i].y}] > 0){
            cap[{a[i].x, a[i].y}]--;
            perfectMatch++;
            fin[a[i].y]--;
        }
    }
    cout << match << ' ' << perfectMatch << '\n';
    return 0;
}