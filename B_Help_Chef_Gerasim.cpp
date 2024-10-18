#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()
#define x first
#define y second

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> mp,index;
    f(i, 0, n)
    {
        cin >> a[i];
        int temp = a[i];
        mp[temp]++;
        index[temp] = i+1;
        // if(n == 198 && i > 100) cout << a[i] << '\n';
        //wrote to get the testcase where ,y coed failed lmao
    }
    int s = mp.size();
    if(s==1)    cout << "Exemplary pages.";
    else if(s > 3) cout << "Unrecoverable configuration.";
    else{
        int ans = 0;
        int c = 0;
        vector<int>temp;
        for(auto i : mp){
            if(i.y == 1){ temp.push_back(i.x) ;   c++;}
        }
        if(c == 2 || (c==3 && n==3)){

            int a = *max_element(all(temp));
            int b = *min_element(all(temp));
            int target = 0;
            for(auto i : mp){
                if(i.x != a && i.x != b) target = i.x;
            }
            int diff = (a-b);
            // cout << target;
            if(diff%2 != 0 ||( n != 2 && ((a - diff/2 != target) || (b + diff/2 != target))))
                cout << "Unrecoverable configuration.";
            else
                cout << diff/2 << " ml. from cup #" << index[b] << " to cup #"<<index[a]<<'.';
        }else{
            cout << "Unrecoverable configuration.";
        }
    }
    return 0;
}