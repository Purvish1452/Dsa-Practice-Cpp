// jay mahakaal
// shree mahakali maa
#include <bits/stdc++.h>
using namespace std;
int h[26];
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {

        h[s[i]] += 1;
    }
    int t;
    cin >> t;
    while (t--)
    {
        char m;
        cin >> m;
        cout << h[m] << endl;
    }
}