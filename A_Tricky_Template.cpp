#include<bits/stdc++.h>
using namespace std;

void findAndPrintCommonSubstring(const string& str1, const string& str2) {
    int len1 = str1.length();
    int len2 = str2.length();
    string commonSubstring = "";

    // Iterate through all substrings of str1
    for (int i = 0; i < len1; ++i) {
        for (int j = 1; j <= len1 - i; ++j) {
            string substring = str1.substr(i, j);

            // Check if the substring is present in str2
            if (str2.find(substring) != string::npos && substring.length() > commonSubstring.length()) {
                commonSubstring = substring;
            }
        }
    }

    // Print the common substring if found
    if (!commonSubstring.empty()) {
        cout << "Common substring: " << commonSubstring << endl;
    } else {
        cout << "No common substring found.\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
        string  a,b,c;
        cin>>a>>b>>c;
        findAndPrintCommonSubstring(a,b);
        cout<<'\n';
    }

    return 0;
}