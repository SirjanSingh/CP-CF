#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int w,h;
        cin >> w >> h;

        int a,b,c,d;

        cin >> a;
        vector<int> w1(a);
        f(i, 0, a)   cin >> w1[i];
        cin >> b;
        vector<int> w2(b);
        f(i, 0, b)   cin >> w2[i];
        cin >> c;
        vector<int> h1(c);
        f(i, 0, c)   cin >> h1[i];
        cin >> d;
        vector<int> h2(d);
        f(i, 0, d)   cin >> h2[i];

        
        int w1min = *min_element(all(w1));
        int w1max = *max_element(all(w1));
        int diffw1 = w1max - w1min;

        int w2min = *min_element(all(w2));
        int w2max = *max_element(all(w2));
        int diffw2 = w2max - w2min;

        int wArea = max(diffw1,diffw2) * h;

        int h1min = *min_element(all(h1));
        int h1max = *max_element(all(h1));
        int diffh1 = h1max - h1min;

        int h2min = *min_element(all(h2));
        int h2max = *max_element(all(h2));
        int diffh2 = h2max - h2min;
        int hArea =  max(diffh1,diffh2) * w;

        cout << max(wArea,hArea) << '\n';



    }
    return 0;
}