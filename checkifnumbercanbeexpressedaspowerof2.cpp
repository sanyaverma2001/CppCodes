#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "\t\n enter  a number : ";
    cin >> n;

    if ((n & (n - 1)) == 0)
    {
        cout << "yes number can be expressed as power of two!!";
    }
    else
    {
        cout << "no number can't be expressed as power of two!!";
    }
    return 0;
}