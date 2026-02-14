// jay mahakaal
// shree mahakali maa
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Rotate the array by 1 position to the right
    int first = a[0];
    for (int i = 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    a[n - 1] = first;
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";

}