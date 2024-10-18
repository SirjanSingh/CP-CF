// #include <bits/stdc++.h>
// using namespace std;

// #define f(i, x, y) for (int i = x; i < y; i++)
// #define int long long
// #define yes cout << "YES\n"
// #define no cout << "NO \n"
// #define all(vector) vector.begin(), vector.end()

// signed main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a;
//         string s = to_string(n);
//         while(n>0){
//             a.push_back(n%10);
//             n/=10;
//         }
//         reverse(all(s));
//         int ans = 0;
//         bool flag = false;
//         int req = 0;
//         int x = 0;
//         cout <<s <<'\n';
//         f(i, 0, s.length())
//         {
//         //   cout << ans << ' ';
//           int curreq = req ; 
//           int curans = ans;
          
//             if (s[i] == '0')
//             {
//                 // ans++;
//                 f(k, i+1, s.length())
//                 {
//                         // cout << s[k] << ' ' <<ans << ' ' ; 
//                     if (s[k] == '5' || s[k] == '0')
//                     {
//                         // ans++;
//                         flag = true;
//                         // curreq++;
//                         req++;
//                         break;
//                     }else{
//                         ans++;
//                     }
//                     if(k==i)    ans = curans;
//                 }
//                 // break;
//             }
//             else if (s[i] == '5')
//             {
//                 f(k, i+1, s.length())
//                 {
//                     if (s[k] == '7' || s[k] == '2')
//                     {
//                         // ans++;
//                         // curreq++;
//                         req++;
//                         flag = true;
//                         break;
//                     }else{
//                         ans++;
//                     }
//                     if(k==i)    ans = curans;
                    
//                 }
//             }
//             // else
//             // {
//             //     x++;
//             // }
//             // cout << " to " << ans << ',' << x << '|' ;
//             if(curreq == req || !flag){x++;   ans = curans;}
//             if (flag || req == 2)
//                 break;
//         }
//         // cout << '\n';
//         // cout << req  << ' ';
//         cout<< ans + x<<'\n';
//         // cout << '\n';
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int ms(string s) {
    int n = s.length();
    int m = n;
    vector<string> p = {"00", "25", "50", "75"};

    for (string pat : p) {
        int steps = 0;
        int pi = pat.size() - 1;

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == pat[pi]) {
                pi--;
                if (pi < 0) break;
            } else {
                steps++;
            }
        }
        if (pi < 0) {
            m = min(m, steps);
        }
    }

    return m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        cout << ms(n) << endl;
    }

    return 0;
}
