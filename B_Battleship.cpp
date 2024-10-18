#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int t = n;
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        s.push_back(temp);
    }
    unordered_map<int, int> indxmp;
    for (int i = 0; i < n; ++i)
    {
        for (int x = 0; x < n - k + 1; x++)
        {
            string temp = s[i].substr(x, k);
            auto found = temp.find('#');
            if (found == string::npos)
            {
                for (int j = x; j < x + k; ++j)
                {
                    indxmp[(i + 1) * 1000 + j + 1]++;
                }
            }
        }
    }
    int max = -1;
    // now rotate teh string vecotrs and then iterate through vertical and check the samne
    vector<string> sv(n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            sv[i].push_back(s[j][i]);
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int x = 0; x < n - k + 1; x++)
        {
            string temp = sv[i].substr(x, k);
            auto found = temp.find('#');
            if (found == string::npos)
            {
                for (int j = x; j < x + k; ++j)
                {
                    indxmp[(j + 1) * 1000 + i + 1]++;
                }
            }
        }

    }
    int max_element = 0;
    for (auto i : indxmp)
    {
        if(i.second > max){
            max_element = i.first;
            max = i.second;
        }
    }
    if(max_element){
    cout<<max_element/1000<<" "<<max_element%1000;
    }
    else{
        cout<<"1 1";
    }
    return 0;
}