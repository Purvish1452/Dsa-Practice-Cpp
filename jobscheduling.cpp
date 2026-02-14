// jay mahakaal
// shree mahakali maa
// kaal uska kaya bigade jo bhakt ho mahakaal ka
#include <bits/stdc++.h>
using namespace std;
int logestcommane(string s1, string s2)
{
    int n = s1.size();
    int m = s2.size();
    vector<int> curr(m + 1, 0), prev(m + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                curr[j] = 1 + prev[j - 1];
            }
            else
            {

                curr[j] = max(prev[j], curr[j - 1]);
            }
        }
        prev = curr;
    }
    return prev[m];
}

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    cout << logestcommane(s1, s2) << endl;
}
