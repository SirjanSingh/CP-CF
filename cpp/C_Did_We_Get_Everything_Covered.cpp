#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;cin>>t;
    while(t--){
    int n,k,m;
    cin>>n>>k>>m;
    string s;
    cin>>s;
    string s1;int cp = n;
    while(n--){
         for(int i = 97;i < 97+k;i++){
               s1=s1+(char)i;
          }
     }
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());

    if(s==s1){
        cout<<"YES"<<'\n';
    }else{
        //just check acc to value of k n m what will you print and dont use any loopor anyu other thing
        // try thinking something else if this method doesnt work 
        //just check is every alphabet of the string comes in teh string k times the elemenst which doenst  coem in the 
        // string k times just print it n times and all other possible combos can be made without it needing n times peace
        
        int cpy = k;int counter = 0;int increment = 0;int flag = 0;
       int arr[26] = {0};char ch = 'u';
       //there is some test case where teh value of ch is updating 
    for (int i = 0; i < m; i++)
    {
        arr[s[i]-97]++;
    }
    
    for(int i = 0;i<k;i++){
         if(arr[i]<cp){
              ch = (char)(97+i);
              //cout<<ch<<" "<<arr[i]<<'\n';
         }//cout<<arr[i]<<' '<<(bool)(arr[i]<n)<<' '<<n<<'\n';
    }
    cout<<"NO"<<'\n';
    while(cp--)     cout<<ch;
    cout<<'\n';
       
        //cout<<s<<" "<<s1<<" "<<ch<<'\n';
    }
    }
    return 0;
}