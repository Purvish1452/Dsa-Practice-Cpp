// jay mahakaal
// shree mahakali maa
#include <bits/stdc++.h>
using namespace std;

// //Better solution

// int main()
// {
//     int n, d;
//     cin >> n >> d;
//     vector<int> a(n), temp;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         if (i < d)
//         {
//             temp.push_back(a[i]); //
//         }
//     }
//     // Rotate the array by d positions to the right
//     d = d % n; // To handle cases where d >= n
//     for (int i = d; i < n; i++)
//     {
//         a[i - d] = a[i];
//     }

//     for (int i = n - d; i < n; i++)
//     {
//         a[i] = temp[i - (n - d)];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }




// optimal solution



int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Rotate the array by d positions to the right
    d = d % n; // To handle cases where d >= n
    reverse(a.begin(), a.begin() + d);
    reverse(a.begin() + d, a.end());
    reverse(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}