#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define nline '\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pr_vec(vec) for(auto &num: vec){cout<<num<<" ";}cout<<endl;
#define pr_vecPair(vec) for(auto &num: vec){cout<<num.first<<" "<<num.second<<'\n';}cout<<endl;
#define inp_vec(vec) for(auto &ele: vec){cin>>ele;} 
#define inp_vec_n(vec,n)for(long long int i=0;i<n;++i){cin>>vec[i];}
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }

void solve(ll tc)
{
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    for(ll i=1;i<=n;++i)
    {
        cin>>v[i];
    }
    if(n==1)
    {
        cout<<0<<nline;
        return;
    }
    // pr_vec(v);
    ll maxi = -1000000007;
    maxi =max(maxi,(v[n] - (*min_element(v.begin()+1,v.end()-1)))) ;
    cout << maxi << ' ' ;
    maxi =max(maxi,((*max_element(v.begin()+2,v.end())))-v[1]) ;
    cout << maxi << ' ' ;
    cout << '\n';
    for(ll i = 1;i<=n;++i)
    {
        if(i-1==0)maxi = max(maxi,v[n]-v[1]);
        else maxi = max(maxi,v[i-1]-v[i]);
        cout<<maxi<< ' '  << v[i-1] << ' ' << v[i] << '\n';
    }
    // cout << maxi << ' ' ;
    
    cout<<maxi<<nline;


}
int main()
{
    fast
    ll t;
    cin>>t;
    ll i=1;

    while(i<=t)
    {
        solve(i);
        i++;
    }
    return 0;
}