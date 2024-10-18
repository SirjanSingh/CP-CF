#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(),vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int,int>
#define mapci map<char,int>

set<string>st;
int add(string& s ,int l ,int r){
    if(l==r){
        st.insert(s);
    }
    else{
        f(i,l,r+1){
            swap(s[l],s[i]);
            add(s,l+1,r);
            swap(s[l],s[i]);
        }
    }
    return 0;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >>s;
    // sort(all(s));
    // map<string,int>a;
     add(s,0,s.size()-1);
    cout << st.size() << '\n';
    for(auto i : st) { cout << i << '\n'; } 
    return 0;
}