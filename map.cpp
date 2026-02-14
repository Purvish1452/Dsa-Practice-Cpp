// jay mahakaal
// shree mahakali maa
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    for (auto p : m)
    {
        cout << p.first << p.second << endl;
    }
}