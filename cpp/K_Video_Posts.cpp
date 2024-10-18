 #include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> a;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        sum += temp;
        a.push_back(temp);
    }
    // cout<<sum<<'\n';
    if(k == 1){
        cout<<"Yes\n"<<n;
        exit(0);
    }
    if (sum % k == 0)
    {

       //  SALEO CAN YOU SEE THIS 


       // cout << "Yes\n";
        int csum = 0;
        vector<int> count;
        int c = 0;
        bool yes = false;
        for (int i = 0; i < n; i++)
        {
            csum += a[i];
            c++;
            if (csum == sum/k)
            {
                count.push_back(c);
                // c = 0;
                yes = true;
                // cout << c << " ";
                c = 0;
                csum = 0;
            }
            if(csum > sum/k){
                cout<<"No";
                break;
            }
        }
        if(yes){
            cout<<"Yes\n";
            for(int i : count)  cout<<i<<" ";
        }
    }
    else
    {
        cout << "No";
    }

    return 0;
}