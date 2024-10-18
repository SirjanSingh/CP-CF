#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        map<char,int>mp1,mp2,mp;
        bool flag = false;
        for(char i : s1)    mp1[i]++;
        for(char i : s2)    mp1[i]--;
        for(char i : s2){
            if(mp1[i] < 0){
                flag = true;
                break;
            }
        }
        if(flag)    no;
        else{
            int ans = 0;
            f(i, 0, s1.size())
                if(mp1[s1[i]] !=0 ){  mp1[s1[i]]--; s1[i] = '1';}
            string s3 = "";
            for(auto i : s1)
                if(i!='1')  s3.push_back(i);
            if(s3 == s2)    yes;
            else no;
        }
    }
    return 0;
}