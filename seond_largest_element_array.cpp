// jay mahakaal
// shree mahakali maa

// O(n) time complexity
// second largest element in an array



// #include <bits/stdc++.h>
// using namespace std;
// int a[10 ^ 6];
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n), b(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     int largest = a[0];
//     int second_largest = -1;

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > largest)
//         {
//             second_largest = largest;
//             largest = a[i];
//         }
//         else if (a[i] < largest && a[i] > second_largest)
//         {
//             second_largest = a[i];
//         }
//     }

//     cout << largest << " " << second_largest << endl;
// }










// O(n) time complexity
// second smallest element in an array

#include <bits/stdc++.h>
using namespace std;
int a[10 ^ 6];
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int smallest = a[0];
    int second_smallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < smallest)
        {
            second_smallest = smallest;
            smallest = a[i];
        }
        else if (a[i] < smallest && a[i] > second_smallest)
        {
            second_smallest = a[i];
        }
    }

    cout << smallest << " " << second_smallest << endl;
}