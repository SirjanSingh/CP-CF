#include <iostream>
#include <string>
using namespace std;

bool cc(int n, int m, int k,  string r) {
    int p = 0, s = 0;
    int cur = m-1;

    // while (p <= n) {
    //     if (p == n || p + m > n) {
    //         return true;
    //     }

        // int np = p;
        for (int j = 0; j < n; ++j) {
            // int jp = p + j;
            // if (jp > n) break;
            if (r[j] == 'L') cur = m;
            else if(r[j] == 'W'){ if(cur<=0) s++;}
            else { if(cur <=0) p++;}
            cur--;
        }

        // if (np > p) {
        //     p = np;
        //     // continue;
        // }

        // if (p < n && r[p] == 'W' && s < k) {
        //     p++;
        //     s++;
        // } else {
        //     return false;
        // }
        if(s > k) p++;
    // }

    return ((p)?false:true);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        string r;
        cin >> n >> m >> k >> r;

        cout << (cc(n, m, k, r) ? "YES" : "NO") << endl;
    }
    return 0;
}
