#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << !(i % 2);
        x = !(i % 2);
        for (int j = 0; j < i; j++)
        {
            if (x == 0)
            {
                cout << 1 << " ";
                x = 1;
            }
            else
            {
                cout << 0 << "  ";
                x = 0;
            }
        }
        cout << "\n";
    }
    return 0;
}