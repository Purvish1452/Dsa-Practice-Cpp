// jay mahakaal
// shree mahakali maa
#include <bits/stdc++.h>
using namespace std;


// brute force solution
//  int main()
//  {
//      int n;
//      cin >> n;
//      vector<int> a(n);
//      vector<int> b(n);
//      for (int i = 0; i < n; i++)
//          cin >> a[i];
//      for (int i = 0; i < n; i++)
//          cin >> b[i];

//     set<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         s.insert(a[i]);
//         s.insert(b[i]);
//     }
//     for (auto p : s)
//     {
//         cout << p << " ";
//     }
// }

// optimal solution
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> a(n1);
    vector<int> b(n2), union_array;
    for (int i = 0; i < n1; i++)
        cin >> a[i];
    for (int i = 0; i < n2; i++)
        cin >> b[i];

    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {

        if (a[i] <= b[j])
        {
            if (union_array.size() == 0 || union_array.back() != a[i])
            {
                union_array.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (union_array.size() == 0 || union_array.back() != b[j])
            {
                union_array.push_back(b[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (union_array.size() == 0 || union_array.back() != a[i])
        {
            union_array.push_back(a[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (union_array.size() == 0 || union_array.back() != b[j])
        {
            union_array.push_back(b[j]);
        }
        j++;
    }
    for (auto p : union_array)
    {
        cout << p << " ";
    }
}