#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,n1;
    cin >> n>>k>>n1;
    int arean = n*n;
    int arean1 = k*5*5;
    if(arean <=arean1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}