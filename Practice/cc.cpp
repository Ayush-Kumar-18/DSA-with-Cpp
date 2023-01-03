#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        // int n;
        // cin>>n;
        // int a[100];
        // map<int, int> m;
        // for(int i = 0; i<n; i++){
        //     cin>>a[i];
        //     // m[a[i]]++;
        // }
        int n;
        map<int,int> m;
        cin >> n;
        int a[100];
        for (int i = 0; i < n; i++)
        {
            cin >> a[n];
        }
        
        for (int i = 0; i < n; i++)
        {
            m[a[i]]++;
        }
        for (auto i : m)
        {
            cout << i.first << " " << i.second << endl;
        }

        if (n & 1)
            cout << "No" << endl;
        else
        {
            bool y = false;
            for (auto i : m)
            {
                cout << i.first << " " << i.second << endl;
                if ((i.second & 1) == 0)
                    y = true;
            }
            if (y)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
