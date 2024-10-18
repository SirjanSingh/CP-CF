#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(),vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    
        map<int,int>a;

        f(i, 0, n)
        {
            int temp;
             cin >> temp;
             a[temp]++;
            //  int temp = a[i];
   
        }
        bool flag = false;
        for(auto i :a){
            if(i.second >1){
                flag = true;
            }
        }
        if(!flag) no;
        else yes;
    }
    return 0;
}