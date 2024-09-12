#include <bits/stdc++.h>
using namespace std;

void PmTask()
{
    string s;
    cin >> s;
    int n = s.size();

    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] >= '2')
        {
            cout << "YES" << endl;
            break;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        PmTask();
    }

    return 0;
}
