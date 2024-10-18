#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define fr(i, x, y) for (int i = x; i > y; i--)
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
        int n;
        cin >> n;
        string s = "aeiou";
        if(n>=5){
            int  x = n/5;
            int y = n%5;
            string a,b,c,e,d;
             a=b=c=d=e="";
             f(i,0,x){
                a+="a";
                b+="e";
                c+="i";
                d+="o";
                e+="u";
             }
             if (y == 1) a+= "a";
             else if(y == 2)a+="a",b+="e";
             else if(y==3)a+="a",b+="e",c+="i";
             else if(y==4)a+="a",b+="e",c+="i",d+="o";
            cout << a + b + c+ d+e;
        }else{
            f(i,0,n) cout << s[i];
        }
        nl;
    }
    return 0;
}