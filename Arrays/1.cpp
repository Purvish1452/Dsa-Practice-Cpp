#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int x = 100;
    // stringstream ss;

    // ss << x;

    // string s = ss.str();
    // cout << s; // "100"

    string s = "12345";
    stringstream ss(s);

    int x;
    ss >> x;

    cout << x + 5; // 12350
}