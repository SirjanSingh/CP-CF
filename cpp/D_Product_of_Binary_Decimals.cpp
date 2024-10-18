#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;

  vector<bool> a(100000, false);
  vector<int> b;
  for (int i = 1; i <= 100000; i++)
  {
    string s = to_string(i);
    int zero = count(s.begin(), s.end(), '0');
    int one = count(s.begin(), s.end(), '1');
    if (one + zero == s.size())
    {
      // a[i] = true;
      b.push_back(i);
    }
  }

  set<long long int> pro;
  // cout<<b.size() << '\n';
  for (auto i : b)
  {
    for (auto j : b)
    {

      long long int prod = i * j ;
      if (prod <= 100000)
      {
        pro.insert(i * j );
        a[i * j ] = true;
      }
    }
  }
  for(int i : b){
    for(auto j : pro){
      if (i*j <= 100000)
      {
        pro.insert(i * j );
        a[i * j ] = true;
      }
    }
  }
  for(int i : b){
    for(auto j : pro){
      if (i*j <= 100000)
      {
        pro.insert(i * j );
        a[i * j ] = true;
      }
    }
  }
  // a[1] = true;
  // cout<<"\n\n"<<'\n';
  // for (auto i : pro)
  //   cout << i << '\n';

  while (t--)
  {
    int n;
    cin >> n;
    cout << ((a[n]) ? "YES\n" : "NO\n");
  }
  return 0;
}