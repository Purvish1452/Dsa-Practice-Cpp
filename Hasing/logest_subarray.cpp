// jay mahakaal
// shree mahakali maa

// <--Brute force solution-->

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int l = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {

//             sum += a[j];

//             if (sum == k)
//             {
//                 l = max(l, j - i + 1);
//             }
//         }
//     }
//     cout << l << endl;
// }

//<--optimal solution-->

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int low = 0, high = 0;
    int sum = a[0];
    int l = 0;
    while (high < n)
    {
        while (sum > k && low <= high)
        {
            sum = sum - a[low];
            low++;
        }
        if (sum == k)
        {
            l = max(l, high - low + 1);
        }

        high++;
        if (high < n)
        {
            sum += a[high];
        }
    }
    cout << l << endl;
}