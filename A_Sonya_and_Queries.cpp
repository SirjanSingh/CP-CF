#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define ll long long int

// int conv(ll n){
//     ll d,r;
//     ll t = n;
//     while(n>0){
//         d = (n%10)%2;
//         r = r*10+d;
//         n=n/10;
//     }
//     while(t>0){
//         d = (t%10)%2;
//         r = r*10+d;
//         t=t/10;
//     }
//     return r;

// }
string normalize(string custom_binary) {
    int first_non_zero = custom_binary.find_first_not_of('0');
    if (first_non_zero == string::npos) { 
        return "0"; 
    } else {
        return custom_binary.substr(first_non_zero);
    } 
}
string conv(ll n) {
    string custom_binary = ""; 

    
    if (n == 0) {
        return "0";
    }

    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            custom_binary = "0" + custom_binary; 
        } else {
            custom_binary = "1" + custom_binary; 
        }
        n /= 10;
    }
    return normalize(custom_binary); 
}

int main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   int n;
    cin>>n;
    int t = n;
    map<string,int>mp;
    while(t--){
        char ch;
        cin >> ch;
        ll temp;
        cin>>temp;
        // cout<<conv(temp)<< " temp"<<'\n';

        if(ch == '+')
            mp[normalize(conv(temp))]++;
        else if(ch == '-')
            mp[normalize(conv(temp))]--;
        else{
            cout<<mp[to_string(temp)]<<'\n';
        }
    }
    return 0;
}