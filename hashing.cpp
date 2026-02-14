// jay mahakaal
// shree mahakali maa
#include <bits/stdc++.h>
using namespace std;

const int f = 1e7 + 10;
int freq[f];
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

        for (int i = 0; i < n; i++)
    {
        freq[a[i]] += 1;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int p;
        cin >> p;
        cout << freq[p] << endl;
    }
}