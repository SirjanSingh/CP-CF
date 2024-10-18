#include <bits/stdc++.h>
using namespace std;

#define f(i,x,y) for(int i = x;i<y;i++)
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<pair<int,pair<int,int>>> a;
    f(k,0,t) {
        int i, j;
        cin >> i >> j;
        a.push_back(make_pair(i,make_pair(j,k+1)));
    }
    sort(a.begin(), a.end(), [](const auto& a, const auto& b) {
        return a.first < b.first;
    });
    int count = 0;
    for (int i = 0; i < a.size()-1; ++i) { 
        if((a[i].first>=a[i+1].first && a[i].second.first<=a[i+1].second.first)){
            cout<<a[i].second.second<<' '<<a[i+1].second.second;
            count = -1;
            break;
        }
        else if((a[i].first<=a[i+1].first && a[i].second.first>=a[i+1].second.first)){
            cout<<a[i+1].second.second<<' '<<a[i].second.second;
            count = -1;
            break;
        }
    }
    if(count != -1) cout<<"-1 -1";
    return 0;
}
