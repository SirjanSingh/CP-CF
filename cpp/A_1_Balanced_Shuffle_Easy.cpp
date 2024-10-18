#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(),vector.end()

bool customCompare(const pair<std::pair<int, int>, char>& a, const pair<std::pair<int, int>, char>& b) {
    if (a.first.first != b.first.first)
        return a.first.first < b.first.first;
    
    if (a.first.second != b.first.second)
        return a.first.second > b.first.second;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    vector < pair < pair<int,int>,char>>a;
    int cur = 0;
    int i = 0;
    for(char ch : s){
        if(ch  == '('){
            a.push_back({{cur,i},ch});
            cur++;
        }else{
            a.push_back({{cur,i},ch});
            cur--;
        }
        i++;
    }
    // for(auto  i : a)    cout << i.first.first << ' ' <<i.first.second << ' ' <<  i.second << '\n';
    // cout << '\n';
    sort(all(a),customCompare);
    for(auto  i : a) cout << i.second;//    cout << i.first.first << ' ' <<i.first.second << ' ' <<   i.second << '\n';
    return 0;
}