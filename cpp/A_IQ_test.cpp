#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    int count = 0;
    int index;
} answer;

int main()
{

    answer a[2];
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        int n;
        cin >> n;
        a[n % 2].count++;
        a[n % 2].index = i;
        i++;
    }
    if (a[0].count == 1)
        cout << a[0].index;
    else
        cout << a[1].index;
    return 0;
}