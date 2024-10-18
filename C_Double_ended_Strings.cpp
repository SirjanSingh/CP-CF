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

signed main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   int t;cin>>t;
    while(t--){
    
    string a,b;
    cin>>a>>b;

    int al = a.length(),bl=b.length();
    if(a == b){
        cout << 0 << '\n';
        continue;
    }
    if(al < bl){
        int ans = 0;
        int l = 0;
        f(j,0,al){
            f(i,1,al-j+1){
                string temp = a.substr(j,i);

                if(b.find(temp) == string::npos) break;
                // ans = i+1;
                l++;
                // cout << temp << ' ' << l<< ' ' << '\n';
            }
            ans = max(ans,l);
            l=0;
        }
        cout << al+bl -2*ans << "\n";
        nl;
    }else{
        int ans = 0;
        int l = 0;
        f(j,0,bl){
            f(i,1,bl-j+1){

                string temp = b.substr(j,i);
                if(a.find(temp) == string::npos) break;
                // ans = i+1;
                l++;
                // cout << temp << ' ' << l<< ' ' << '\n';
            }
            ans = max(ans,l);
            l=0;

        }
        cout << al+bl - 2*ans << "\n";
        nl;
    }
nl;
    }
    return 0;
}