#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        int b[3] = {0};
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int num = 0;
            cin >> num;
            a.push_back(num);
            sum += a[i];
            int temp = a[i] % 3;
            if (temp != 0)
            {
                if (temp == 1)
                    b[1]++;
            }
        }

        if (sum % 3 == 0)
        {
            cout << "0\n";
        }
        else if (sum % 3 == 2)
        {
            cout << "1\n";
        }
        else
        {
            if (b[1] == 0)
                cout << "2\n";
            else
                cout << "1\n";
        }
    }
    return 0;
}