// #include <bits/stdc++.h>
// using namespace std;

// #define f(i, x, y) for (int i = x; i < y; i++)
// #define fr(i, x, y) for (int i = x; i > y; i--)
// #define int long long
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define all(vector) vector.begin(), vector.end()
// #define nl cout << "\n"
// #define x first
// #define y second
// #define mapii map<int, int>
// #define mapci map<char, int>

// signed main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s1, s2;
//     cin >> s1 >> s2;
//     int n = s1.length(), m = s2.length();
//     int ans = 0;
//     f(i, 0, n - m+1)
//     {
//         string t = s1.substr(i,m);
//         // cout << t << '\n';
//         if(t == s2) ans++;
//     }
//     // cout << n << ' ' << m << '\n';
//     cout << ans << "\n";

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void computeLPSArray(string pat, int M, vector<int>& lps) {
    int length = 0;
    lps[0] = 0;
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = lps[length - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

int KMPSearch(string pat, string txt) {
    int M = pat.size();
    int N = txt.size();
    vector<int> lps(M);
    computeLPSArray(pat, M, lps);

    int i = 0;
    int j = 0;
    int count = 0;
    while (i < N) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }
        if (j == M) {
            count++;
            j = lps[j - 1];
        } else if (i < N && pat[j] != txt[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    int result = KMPSearch(s2, s1);
    cout << result << "\n";

    return 0;
}
