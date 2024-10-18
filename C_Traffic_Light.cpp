#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char ch;
        cin >> n >> ch;
        string s;
        cin >> s;
        if(ch == 'g'){
            cout << 0 << '\n';
            continue;
        }else{
            int mx = 0;
            int curmx = 0;
            int firstG = 0;
            bool gotFirstG = false;
            int startPoint = 0;
            for(char i : s){
                if(i == ch) startPoint = 1;
                if(i != 'g' ){
                    if(!gotFirstG)  firstG++;
                    // if(curmx == 0 && i == ch)
                    if(startPoint == 1)
                        curmx++;
                }else{
                    gotFirstG = true;
                    mx = max(mx,curmx);
                    curmx = 0;
                    startPoint = 0;
                }
            }
            // cout << mx << ' ' << curmx << ' ' << firstG << ' ' << startPoint << '\n';
            if(curmx != 0)  mx = max(mx, curmx + firstG);
            cout << mx << '\n';
        }
    }
    return 0;
}