#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int lb = 0;
        int cb = 0;
        
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                cb++;
            } else {
                lb = max(lb, cb);
                cb = 0;
            }
        }
        
        lb = max(lb, cb);
        
        cout << lb << endl;
    }
    
    return 0;
}
