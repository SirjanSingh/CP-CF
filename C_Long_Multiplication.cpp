#include<bits/stdc++.h>
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

signed main() {
    int t;
    std::cin >> t;
    
    while (t--) {
        string x, y;
        cin >> x >> y;
        int f = 1;
        f(i,0,x.length()){
            if(f == 1){
                if(x[i] == y[i]){
                    continue;
                }
                else{
                    // f=0;
                    if(x[i] - '0' > y[i] - '0' )    f = 0;
                    else f = -1;
                    // i--;
                    continue;
                }
            }
            else if(f == -1){
                if(x[i] - '0' < y[i] - '0' ) swap(x[i],y[i]);
            }
            else{
                if(x[i] - '0' > y[i] - '0' ) swap(x[i],y[i]);
            }
        }
        // cout << max(956598831787008,1135927515787008  );
        nl;
        cout << x << endl;
       cout << y << endl;
    }
    
    return 0;
}
