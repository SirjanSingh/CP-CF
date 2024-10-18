#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
    cout<<((s1.compare(s2) == 0)?"0": s1.compare(s2) > 0?"1":"-1");

    return 0;
}