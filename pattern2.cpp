#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter the number of rows and columns :";
    cin >> r >> c;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || j == 1 || i == r || j == c)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}