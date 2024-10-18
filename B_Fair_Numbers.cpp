#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

int checkfair(int n)
{
    int num = n;
    while (n > 0){
        int d = n % 10;
        if (d == 0){
            n = n / 10;
            continue;
        }
        else{
            if (num % d != 0)
                return 0;
        }
        n = n / 10;
    }
    return 1;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int ans = 0;
        int num = 0;
        int i = n;
        while (ans != 1){
            ans = checkfair(i);
            num = i;
            i++;
                
        }
        cout << num << '\n';
    }

    return 0;
}