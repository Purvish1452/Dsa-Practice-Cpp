#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int c1 = 0, c2 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        c1 = c1 ^ i;
        c2 = c2 ^ a[i];
    }
    cout << (c1 ^ c2) << endl;
}
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     int c1 = 0, c2 = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//         if (i != a[i])
//         {
//             c1 = i;
//             break;
//         }
//     }
//     cout << c1 << endl;
// }