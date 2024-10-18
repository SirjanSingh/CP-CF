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

    int n;
    cin >> n;

    vector<int> a(n);

    f(i, 0, n)
    {
        cin >> a[i];
        int temp = a[i];
    }
    int curmx = 0,curmn = 0;
    bool flag = false;
    int once = 0;
    f(i,0,n-1){
        // curmx = max(a[i],curmx);
        if(a[i] > a[i+1] && !once){
            curmx = i;
            break;
        }
    }
    for(int i = n-1;i > 0;i--){
        if(a[i] < a[i-1]){
            curmn = i;
            break;
        }
    }
    // cout << curmx << ' ' << curmn << '\n';
    vector<int>b = a;
    reverse(a.begin()+curmx,a.begin()+1+curmn);
    sort(all(b));
    if(a == b) cout << "yes\n"<< curmx + 1 << ' ' << curmn + 1;
    else cout << "no\n";
    // for(auto i : a) cout << i << ' ';
    return 0;
}