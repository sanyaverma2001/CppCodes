
//      *        *    
//     ***      ***   
//    *****    *****  
//   *******  ******* 
//  ******************
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, r;
    cout << "Ennter the number of lines" << endl;
    cin >> r;
    cout << "\n";
    for (i = 1; i <= r; i++)
    {
        for (j = i; j <= r; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (j = 2 * i; j <= 2 * r - 1; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}