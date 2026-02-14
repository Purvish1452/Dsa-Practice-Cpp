#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ct = 0;
    int ele;
    for (int i = 0; i < n; i++)
    {
        if (ct == 0)
        {
            ct = 1;
            ele = a[i];
        }
        else if (a[i] == ele)
        {
            ct++;
        }
        else
        {
            ct--;
        }
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == ele)
            c++;
    }
    if (c > n / 2)
        cout << ele << endl;
    else
        cout << -1 << endl;
}