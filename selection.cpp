// jay mahakaal
// shree mahakali maa
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++)
    {
        int mn = i;
        for (int j = i; j < n; j++)
        {
            if (a[j] < a[mn])
            {
                mn = j;
            }
        }
        swap(a[mn], a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}