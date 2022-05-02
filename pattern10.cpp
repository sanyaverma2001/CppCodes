#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
 /*         *                 * 
            * *             * * 
            *   *         *   * 
            *     *     *     * 
            * * * * * * * * * *         */ 
    int n, range1, range2, range3, range4, l = 1; 
    cin >> n; 
    range1 = 0; 
    range2 = 0; 
    range4 = 2 * n; 
    for (int i = 0; i < n - 1; i++) 
    { 
        cout << "* "; 
        for (int j = range1; j < range2 - 1; j++) 
        { 
            cout << "  "; 
        } 
        if (range2 > 0) 
        { 
            cout << "* "; 
        } 
        for (int j = range2 - 1; j < range4 - 4; j++) 
        { 
            cout << "  "; 
            if (j == range4 - 3 - l) 
            { 
                cout << "* "; 
            } 
        } 
        l++; 
        range2++; 
 
        if (range2 ==1) 
        { 
            cout << "  *"; 
        } 
        else{ 
            cout << "*"; 
        } 
        cout << endl; 
    } 
    for (int i = 0; i < 2 * n ; i++) 
    { 
        cout << "* "; 
    } 
}