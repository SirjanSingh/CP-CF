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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> a;
        f(i, 0, n){string s; cin >> s; a.push_back(s);}
        // for(auto i : a){  cout << i ; nl;}
        int a1 = 0,a2=0,b1=0,b2=0;
        int goout = 0;
        f(i,0,n){
            f(j,0,m){
                // cout << i << j  << ' ';
                // cout << a[i][j] ;
                if(a[i][j] == '#'){
                    a1 = i+1;
                    b1= j+1;
                    goout = 1;
                    // cout << a1 << ' ' << b1 ;nl;
                    break;
                }
            }
            if(goout) break;
        }
        int x1,x2,y1,y2;
        // goout = 0;
        // f(i,0,m){   
        //     f(j,0,n){
        //         // cout << i << j  << ' ';
        //         // cout << a[i][j] ;
        //         if(a[j][i] == '#'){
        //             x1 = j+1;
        //             y1= i+1;
        //             goout = 1;
        //             // cout << a1 << ' ' << b1 ;nl;
        //             break;
        //         }
        //     }
        //     if(goout) break;
        // }
        reverse(all(a));
        goout = 0;
        // for(auto i : a){  cout << i ; nl;}
        f(i,0,n){
            f(j,0,m){
                // cout << a[i][j] ;
                if(a[i][j] == '#'){
                // cout << i << j  << ' ';
                    a2 = i+1;
                    b2= j+1;
                    goout = 1;
                    break;
                }
            }
            if(goout) break;
        }
        // goout = 0;
        // f(i,0,m){   
        //     f(j,0,n){
        //         // cout << i << j  << ' ';
        //         // cout << a[i][j] ;
        //         if(a[j][i] == '#'){
        //             x2 = j+1;
        //             y2= i+1;
        //             goout = 1;
        //             // cout << a1 << ' ' << b1 ;nl;
        //             break;
        //         }
        //     }
        //     if(goout) break;
        // }
        a2 = n - a2 + 1;
        // y2 = m - y2 + 1;
                    // cout << a1 << ' ' << b1 ;nl;
                    // cout << a2 << ' ' << b2 ;nl;
                    // cout << x1 << ' ' << y1 ;nl;
                    // cout << x2 << ' ' << y2 ;nl;
                    int r = (a1+a2)/2 ;
        cout << r << ' ' << ((b1 + r -1) + ( b2 - r + 1))/2 << '\n';

    }
    return 0;
}