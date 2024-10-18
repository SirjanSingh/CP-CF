#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

void hc(vector<int>& bin, int index) {
    while (index < bin.size() && bin[index] > 1) {
        if (index + 1 < bin.size()) {
            bin[index + 1] += bin[index] / 2;
        } else {
            bin.push_back(bin[index] / 2);
        }
        bin[index] %= 2;
        index++;
    }
}

void no11(vector<int>& bin) {
    for (int i = 0; i < bin.size() - 1; ++i) {
        if (bin[i] == 1 && bin[i + 1] == 1) {
            bin[i] = -1;
            bin[i + 1] = 0;
            if (i + 2 < bin.size()) {
                bin[i + 2] += 1;
            } else {
                bin.push_back(1);
            }
            hc(bin, i + 2);
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        
            // if(n%2==0){

            // }else{

            // }
            vector<int> bin;

            int dig = 0;
            while (n > 0)
            {
                bin.push_back(n % 2);
                n = n / 2;
                dig++;
            }
            f(k, 0, bin.size())
            {
                hc(bin,k);
            }
            // if (bin[k] > 1)
            // {
            //     if (k + 1 < bin.size())
            //     {
            //         bin[k + 1] += bin[k] / 2;
            no11(bin);
            //     }
            //     else
            //     {
            //         bin.push_back(bin[k] / 2);
            //     }
            //     bin[k] %= 2;
            // }
            // if (k + 1 < bin.size() && bin[k] == 1 && bin[k + 1] == 1)
            // {
            //     bin[k] = -1;
            //     bin[k + 1] = 0;
            //     if (k + 2 < bin.size())
            //     {
            //         bin[k + 2] += 1;
            //     }
            //     else
            //     {
            //         bin.push_back(1);
            //     }
            // }
            // if (bin[k] == 1 && bin[k + 1] == 1) {
            // bin[k] = -1;
            // bin[k + 1] = 0;
            // if (k + 2 < bin.size() ){
            //     if(bin[k+2]  == 0)
            //         bin[k + 2] = 1;
            //     else{
            //         if(k + 3 < bin.size()){
            //             bin[k+2] = 0;
            //             bin[k+3] = 1;
            //         }else{
            //             bin[k+2] = 0;
            //             bin.push_back(1);
            //         }
            //     }
            // } else {
            //     bin.push_back(1);
            // }
            //     cout << bin.size() << '\n';
            // for(auto k: bin)    cout << k << ' ';
            // cout << '\n';
            // }
            // }

            // int fin = 0;
            // for (auto k : bin)
            // {
            //     if (k == 2)
            //     {
            //         fin++;
            //         bin.pop_back();
            //         bin.push_back(0);
            //         bin.push_back(1);
            //     }
            // }
            cout << bin.size() << '\n';
            for (auto k : bin)
            {
                // if (k == 2)
                // {
                //     fin++;
                //     cout << "0 1";
                // }
                // else
                cout << k << ' ';
            }
            cout << '\n';
        
    }
    return 0;
}