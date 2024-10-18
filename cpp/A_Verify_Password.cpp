// #include <bits/stdc++.h>
// using namespace std;

// #define f(i, x, y) for (int i = x; i < y; i++)
// #define int long long
// #define yes cout << "YES\n"
// #define no cout << "NO \n"
// #define all(vector) vector.begin(),vector.end()
// #define x first
// #define y second

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
//         string s;
//         cin >> s;
//         string s1,s2;
//         int a = 0;
//         bool flag = false;
//         int ans = 0;
//         f(i,0,n){
//             // if(s[i] > 96 && s[i] < 122)
//             if(isalpha(s[i])){
//                 ans = 1;
//                 if(!isalpha(s[i+1]) )   flag = true;
//                 a = i;break;
//             }
//             a++;
//         }
//         if(flag)    no;
//         else{

//         // cout << a << '\n';
//         s1 = s.substr(0,a);
//         s2 = s.substr(a,n);
//         // cout << s1 << ' ' << s2  << '\n'; 
//         int f1 = 0 , f2 = 0;
//         if(s1 != ""){
//             // cout << "s1 ok";
//             f(i,0,s1.length()-1){
//                 if(s1[i] > s1[i+ 1]){
//                     f1 = 1;
//                     break;
//                 }
//             }
//         }if(s2 != ""){
//             // cout << "s2 ok";
//             f(i,0,s2.length()-1){
//                 if(s2[i] > s2[i+ 1]){
//                     f2 = 1;
//                     break;
//                 }
//             }
//         }
//         if(!f1 && !f2) yes;
//         else no;
//         // cout << '\n';

//         }
//     }
//     return 0;
// }
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string digits, letters;
        bool flag = false;

        for (char c : s)
        {
            if (isdigit(c))
            {
                if (!letters.empty())
                {
                    flag = true;
                    break;
                }
                digits += c;
            }
            else if (isalpha(c))
            {
                letters += c;
            }
        }
        if (flag)
        {
            no;
            continue;
        }
        if (!is_sorted(all(digits)))
        {
            no;
            continue;
        }
        if (!is_sorted(all(letters)))
        {
            no;
            continue;
        }
        yes;
    }
    return 0;
}