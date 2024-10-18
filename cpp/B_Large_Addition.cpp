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


void solve(){
    int n;
        cin>>n;
    
        vector<int>a;
        int  i = 0;
        while(n>0)
        {
            i++;
            int temp = n%10;
            a.push_back(temp);
            n/=10;
        }
        // reverse(all(a));
        f(i,0,a.size()-1){
            int dig = 10 + a[i];
            // cout << a[i] << ' ' ;
            if(dig > 9 && dig < 19){
                a[i + 1]--;
                // cout << "a[i+1] = " << a[i+1];
                // nl;
                if(a[i+1] == -1){
                    // a[i+1] = 9;
                    f(j,i+1,a.size()){
                        if(a[j] == -1 || a[j] == 0) a[j] = 9;
                        else{ a[j]--; break;}
                    }
                }
            }else{
                no;return;
            }

                // for(auto k : a){
                //     cout << k << ' ';
                // }nl;
        }
        if(a[a.size() -1 ] != 0)    no;
        else
        yes;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}