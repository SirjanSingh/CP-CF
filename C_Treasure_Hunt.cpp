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

bool isSp(const set<int> sp, auto sb) {
    if (sp.size() < sb.size()) return false;
    for (int it : sb) {
        if (sp.find(it) == sp.end()) return false;
    }
    return true;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int np;
    cin >> np;

    vector<set<int>> pt(np);

    f(i, 0, np) {
        int nt;
        cin >> nt;
        f(j, 0, nt) {
            int tr;
            cin >> tr;
            pt[i].insert(tr);
        }
    }

    vector<bool> cw(np, true);

    f(i, 0, np) {
        f(j, 0, np) {
            if (i != j && isSp(pt[i], pt[j])) {
                cw[i] = false;
            }
        }
    }

    f(i, 0, np) {
        if (cw[i]) yes;
        else no;
    }

    return 0;
}

