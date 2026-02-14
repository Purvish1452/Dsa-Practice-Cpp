//jay mahakaal
//shree mahakali maa
#include<bits/stdc++.h>
using namespace std;
void print(int i,int n)
{
    if(i>n) return;
    else{
        //cout<<i<<endl;// normal recursion
        // print(i-1,n);
        // cout<<i<<endl;//backtracking
        print(i+1,n);
        cout<<i<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int i=1;
    print(i,n);
}