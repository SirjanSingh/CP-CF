#include <bits/stdc++.h>
#define f(i, x, y) for (int i = x; i < y; i++)
#define ll long long int

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
 cin.tie(NULL);
  ll tests;
  cin >> tests;

  while (tests--)
  {
    ll size, types;
    cin >> size >> types;

    vector<ll> values(size);
    f(i, 0, size)
    {
      cin >> values[i];
    }

    vector<ll> track(types, -1);
    vector<ll> large(types), small(types);

    f(i, 0, size)
    {
      ll group = values[i] - 1;
      ll span = i - track[group];

      if (span > large[group])
      {
        small[group] = large[group];
        large[group] = span;
      }
      else if (span > small[group])
      {
        small[group] = span;
      }

      track[group] = i;
    }
        // cout << "Initial lastSeen: ";
        // for (int x : track) {
        //      cout << x << " ";
        // }
        // cout << endl;

    f(i, 0, types)
    {
      ll span = size - track[i];
      if (span > large[i])
      {
        small[i] = large[i];
        large[i] = span;
      }
      else if (span > small[i])
      {
        small[i] = span;
      }
    }

    ll least = 1e9;
    f(i, 0, types)
    {
      ll temp = max(large[i] / 2 + large[i] % 2, small[i]);
      least = min(least, temp);
    }

    cout << least - 1 << "\n";
  }
  return 0;
}
