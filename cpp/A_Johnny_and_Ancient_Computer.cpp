// #include<bits/stdc++.h>
// using namespace std;
// void ans(long long n){
//     long long x =n;
//     long long count = 0;
//     while(x>7){
//         x = x/8;
//         count++;
//     }
//     if(x!=1)    count++;
//     cout<<count<<'\n';
    

// }

// // bool checkInteger(double n){
// //     double t = n-(int)n;
// //     if(t==0)    return true;
// //     else    return false;
// // }
// bool checkInteger(double n) {
//     return n!=floor(n);
// }
// bool isPowerOfTwo(long long number) {
//     if (number <= 0) {
//         return false;
//     }
//     return (number & (number - 1)) == 0;
// }
// int main(){
//     int t;cin>>t;
//     while(t--){
//         double a,b;
//         cin>>a>>b;
//         double n = max(a,b)/min(a,b);
//         cout<<"sirjan"<<n<<" "<<(int)max(a,b)%(int)max(a,b)<<" ";
//         if(a == b){  cout<<"0"<<'\n';    continue;}
//         if((int)max(a,b)%(int)max(a,b) != 0)  cout<<"-1"<<endl;
//         else if(checkInteger(n) || !isPowerOfTwo(n))    cout<<"-1"<<'\n';
//         else {
//             ans(n);
//         }
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
long long ao,ax,bo,bx;

void tell(long long a,long long b){
    ao=bo=ax=bx =0;
    while(a%2==0 || b%2==0){
        if(a%2==0){
            a/=2;
            ax++;
        }
        if(b%2==0){
            b/=2;
            bx++;
        }
    }
    bo = b;
    ao = a;
    if(ao != bo){
        cout<<"-1"<<'\n';
    }
    else {
        int res =(abs(bx-ax)/3 + (((abs(bx-ax))%3==0)?0:1));
        cout<<res<<'\n';
        // cout<<ax<<" "<<bx<<'\n';
    }
    //cout<<a<<" "<<b;
}
int main(){
    int t;cin>>t;
    while(t--){
        long long a,b;cin>>a>>b;
        if(a==b)  {  cout<<"0"<<'\n';continue;}
        tell(a,b);
    }

    return 0;
}