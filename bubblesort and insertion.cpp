// jay mahakaal
// shree mahakali maa
#include <bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> &a, int n)
{
    for (int i = n; i > 0; i--)
    {
        int did_swap = 0;
        for (int j = 0; j < i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                did_swap = 1;
            }
        }
        if (did_swap == 0)
        {
            break;
        }
    }
}
void insertion_sort(vector<int> &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            swap(a[j - 1], a[j]);
            j--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bubble_sort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    insertion_sort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}